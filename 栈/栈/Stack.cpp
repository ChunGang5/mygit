#include<iostream>
#include"Stack.h"
#include<assert.h>
#include<malloc.h>
using namespace std;

void StackInit(Stack* ps)
{
	assert(ps);
	ps->array = (DataType*)malloc(sizeof(DataType)* 10);
	ps->capacity = 10;
	ps->size = 0;
}
void CheckStack(Stack* ps)
{
	assert(ps);
	if (ps->size >= ps->capacity)
	{
		//�����¿ռ�
		int newcapacity = ps->capacity*2;
		DataType* temp = (DataType*)malloc(sizeof(DataType)*newcapacity);
		if (temp)
		{
			//����Ԫ��
			memcpy(temp, ps->array, sizeof(DataType)*newcapacity);
			//�ͷžɿռ�
			free(ps->array);
			ps->array = temp;
		}
	}
		
}
void StackPush(Stack* ps, DataType x)
{
	assert(ps);
	CheckStack(ps);
	ps->array[ps->size] = x;
	ps->size++;
}
//��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	ps->size--;
}
//��ȡջ��Ԫ��
DataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->array[ps->size];
}
//�п�
int StackEmpty(Stack* ps)
{
	assert(ps);
	return 0 == ps->size;
}
//��ջ����Ԫ�ظ���
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->size;
}
//����
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->array);
	ps->capacity = 0;
	ps->size = 0;
}

int main()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
	StackPop(&s);
	cout << s.array[4] << endl;

	cin.get();
	return 0;
}
