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

/*************************************************
* 文件名：数据结构之线性表
* 创建人：LiShendu
* 日期：2021年7月8日
* 描述：线性表中链表的节点创建使用等等
* 修改人：LiShendu
* 日期：
* 版本：
**************************************************/

//#include "Student.h"
//
//using namespace std;
//
//int main()
//{
//
//	typedef struct Node
//	{
//		int data;
//		struct Node* Next;
//		struct Node* Prior;
//	}node;
//	node* l1 = (node*)malloc(sizeof(node));
//	node* l2 = (node*)malloc(sizeof(node));
//	node* l3 = (node*)malloc(sizeof(node));
//	l1->Next = l2;
//	l2->Next = l3;
//	l3->Prior = l2;
//	l2->Prior = l1;
//	l1->Next->data = 10;
//	cout << l2->data << endl;
//
//	Student* Stu1 = new Student;
//	Stu1->display("张三", 23, 160, 180);
//	/*printf("\n%d", sizeof(int*));*/
//	cout <<"\n"<< sizeof(int*) << endl;
//	/*Student Stu1;
//	Stu1.display("张三", 23, 160.6, 180.8);*/
//}

#include<iostream>
#include<stdio.h>
#include<errno.h>
#include<string.h>

int maxSize = 20;

int insertElem(int* sqList, int* length, int p, int e) {
	if (p<0 || p>*length || *length == maxSize)
		return 0;
	int i = 0;
	for ( i = *length-1; i >= p; i--)
		sqList[i + 1] = sqList[i];
	sqList[p] = e;
	length++;
}

int main()
{
	/*printf("你好!\n");
	printf("%s\n", strerror(errno));*/
	int p = 3;
	int e = 5;
	int sqList[] = { 1,2,4,3,5,7 };
	int length = sizeof(sqList) / sizeof(sqList[0]);
	insertElem(sqList, &length, p, e);
	/*std::cout << length << std::endl;*/
	int i = 0;
	for ( i = 0; i <= length; i++)
	{
		printf(" %d ", sqList[i]);
	}
	return 0;
}
