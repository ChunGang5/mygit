#ifndef _CONTACT_H_
#define _CONTACT_H_
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#pragma warning(disable:4996)
//姓名、性别、年龄、电话、住址

#define NUM 1000
#define NAME_SIZE 64
#define SEX_SIZE 8
#define TEL_SIZE 16
#define ADDR_SIZE 128
typedef struct people
{
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
	int age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE];
}people_t,*people_p;
typedef struct contact
{
	int cap;
	int num;
	people_t peoples[NUM];
}contact_t,*contact_p,**contact_pp;
//菜单
void Menu();
//0.	初始化通讯录
int InitContact(contact_pp ct_p);
//1.	添加联系人信息
int AddPeople(contact_p ct);
//2.	删除指定联系人信息
int DeletePeople(contact_p ct);
//3.	查找指定联系人信息
int SearchPeople(contact_p ct);
//4.	修改指定联系人信息

//5.	显示所有联系人信息
void ShowAllPeople(contact_p ct);
//6.	清空所有联系人
void ClearAllPeople(contact_p ct);
//7.	以名字排序所有联系人
void SortAllPeople(contact_p ct);
//8.  保存联系人到文件
//9.  加载联系人
#endif
