#define _CRT_SECURE_NO_WARNINGS 1

#include"saolei.h"

void menu()
{
	printf("*************************\n");
	printf("******1.game 0.exit******\n");
	printf("*************************\n");
}
void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化数组
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//显示界面
	//DispalyBoard(mine, ROW, COL);
	DispalyBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//扫雷
	//DispalyBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏~\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}