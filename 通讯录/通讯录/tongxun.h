#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MAX_name 20
#define MAX_sex 5
#define MAX_tele 12
#define MAX_addr 30
struct PeoInfo
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
};
//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放1000个信息
	int size;//记录当前已经有的元素个数
};
//声明函数
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShwoContact(const struct Contact* ps);