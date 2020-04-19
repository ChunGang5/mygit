#pragma once
typedef int DataType;
#define MAX_SIZE 100
typedef struct Stack
{
	DataType *array;
	int size;	//��¼ջ��Ԫ�ظ���
	int capacity;	//����
}Stack;

//��ʼ��ջ
void StackInit(Stack* ps);
//���ջ����������Ҫ������
void CheckStack(Stack* ps);
//��ջ
void StackPush(Stack* ps, DataType x);
//��ջ
void StackPop(Stack* ps);
//��ȡջ��Ԫ��
DataType StackTop(Stack* ps);
//�п�
int StackEmpty(Stack* ps);
//��ջ����Ԫ�ظ���
int StackSize(Stack* ps);
//����
void StackDestory(Stack* ps);