#define _CRT_SECURE_NO_WARNINGS 1

#include"jisuanqi.h"

//菜单
void menu()
{
	printf("****************************\n");
	printf("***1.加法*******2.减法*******\n");
	printf("***3.乘法*******4.除法*******\n");
	printf("**********0.退出*************\n");
	printf("****************************\n");
}
void test()
{
	int input = 0;
	int num1 = 0;
	int num2 = 0;
	int ret = 0;

	//函数指针数组
	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Dvi };
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器");
			break;
		}
		printf("请输入操作数:>");
		scanf("%d%d", &num1, &num2);

		//通过函数指针调用函数，比起switch语句更易扩展并且大大简化代码
		ret = parr[input](num1, num2);
		//清屏再打印
		system("cls");
		printf("结果为：%d\n", ret);
	} while (input);
}
int main()
{
	test();
	return 0;
}