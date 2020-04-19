#pragma once
typedef int DataType;
#define MAX_SIZE 100
typedef struct Stack
{
	DataType *array;
	int size;	//记录栈中元素个数
	int capacity;	//容量
}Stack;

//初始化栈
void StackInit(Stack* ps);
//检查栈容量，有需要就扩容
void CheckStack(Stack* ps);
//入栈
void StackPush(Stack* ps, DataType x);
//出栈
void StackPop(Stack* ps);
//获取栈顶元素
DataType StackTop(Stack* ps);
//判空
int StackEmpty(Stack* ps);
//求栈里面元素个数
int StackSize(Stack* ps);
//销毁
void StackDestory(Stack* ps);