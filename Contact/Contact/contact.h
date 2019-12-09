#ifndef _CONTACT_H_
#define _CONTACT_H_
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#pragma warning(disable:4996)
//�������Ա����䡢�绰��סַ

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
//�˵�
void Menu();
//0.	��ʼ��ͨѶ¼
int InitContact(contact_pp ct_p);
//1.	�����ϵ����Ϣ
int AddPeople(contact_p ct);
//2.	ɾ��ָ����ϵ����Ϣ
int DeletePeople(contact_p ct);
//3.	����ָ����ϵ����Ϣ
int SearchPeople(contact_p ct);
//4.	�޸�ָ����ϵ����Ϣ

//5.	��ʾ������ϵ����Ϣ
void ShowAllPeople(contact_p ct);
//6.	���������ϵ��
void ClearAllPeople(contact_p ct);
//7.	����������������ϵ��
void SortAllPeople(contact_p ct);
//8.  ������ϵ�˵��ļ�
//9.  ������ϵ��
#endif
