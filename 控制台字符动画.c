#define _CRT_SECURE_NO_WARNINGS 1

#define NUM_TEXT 4352	//.txt文件的个数+1
#define ALL_CHARNUM 7448	//每篇txt文件中的总字符数
//#define ROAD_TEXT "F:\\code\\mujiangjuzi\\HuaqiangBuywatermelon\\HuaqiangBuywatermelon\\ConsoleText\\(%d).txt"	//文件路径

#include <stdio.h>					
#include <string.h>					
#include <stdlib.h>					
#include <Windows.h>				

void gotoxy(int x, int y)
{
	COORD pos;//COORD  为 Windows.h 中定义的一个结构体
	pos.X = x - 1;
	pos.Y = y - 1;			
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);//控制台光标设置
}

int main() {
	system("mode con cols=158 lines=54");//控制台窗口大小
	system("color f0");//控制台颜色——白底黑字
	long i = 0;
	char FileName[100] = { 0 };
	Sleep(3000);//暂停3000毫秒
	for (i = 1; i < NUM_TEXT; i++)	//i 的范围转换为(.txt)文件的个数
	{
		sprintf(FileName, "(%d).txt", i);//C 库函数 int sprintf(char *str, const char *format, ...) 发送格式化输出到 str 所指向的字符串。
		//printf(FileName);
		FILE* conText = fopen(FileName, "r");
		if (conText == NULL) {
			printf("%s\n", strerror(errno));
			return;
		}
		else {
			char* tmpText = (char*)malloc(sizeof(char) * ALL_CHARNUM);
			if (tmpText==NULL)
			{
				return;
			}
			fread(tmpText, 1, ALL_CHARNUM, conText);//从in地址中读取当前.txt文件中的总字符个数个字符到hi指向的字符串中每个元素为一个字节
			printf("%s\n%d", tmpText, i);
			free(tmpText);
			tmpText = NULL;
		}
		gotoxy(1, 1);
		Sleep(29);	//帧间隔
		fclose(conText);
		conText = NULL;
	}
	return 0;
}

