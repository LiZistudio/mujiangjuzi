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
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ʾ����
	//DispalyBoard(mine, ROW, COL);
	DispalyBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//ɨ��
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
		printf("��ѡ��:>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ~\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}