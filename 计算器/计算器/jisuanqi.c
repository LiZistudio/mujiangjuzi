#define _CRT_SECURE_NO_WARNINGS 1

#include"jisuanqi.h"

//�˵�
void menu()
{
	printf("****************************\n");
	printf("***1.�ӷ�*******2.����*******\n");
	printf("***3.�˷�*******4.����*******\n");
	printf("**********0.�˳�*************\n");
	printf("****************************\n");
}
void test()
{
	int input = 0;
	int num1 = 0;
	int num2 = 0;
	int ret = 0;

	//����ָ������
	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Dvi };
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������");
			break;
		}
		printf("�����������:>");
		scanf("%d%d", &num1, &num2);

		//ͨ������ָ����ú���������switch��������չ���Ҵ��򻯴���
		ret = parr[input](num1, num2);
		//�����ٴ�ӡ
		system("cls");
		printf("���Ϊ��%d\n", ret);
	} while (input);
}
int main()
{
	test();
	return 0;
}