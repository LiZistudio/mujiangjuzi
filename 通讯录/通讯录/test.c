#define _CRT_SECURE_NO_WARNINGS 1

//	____                      ____
///	|	|                  / |    |
//|	|	|                  | |____|
//|	|	|                  |/____/
//|	|	|                   ______
//|	|	|                 / |     |  
//|	|	|______________   | |     |  
//|	|__________________|  | |     |
//|/___________________/  | |_____|
//                        | /_____/	
//

#include "tongxun.h"

void menu()
{
	printf("**********************************\n");
	printf("****1.����*********2.ɾ��**********\n");
	printf("****3.��ѯ*********4.�޸�**********\n");
	printf("****5.��ʾ*********6.����**********\n");
	printf("****0.�˳�*********7.��չ**********\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼���������1000��Ԫ�ص������size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	//
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShwoContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while (input);
	return 0;
}
