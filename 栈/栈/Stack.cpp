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
		//申请新空间
		int newcapacity = ps->capacity*2;
		DataType* temp = (DataType*)malloc(sizeof(DataType)*newcapacity);
		if (temp)
		{
			//拷贝元素
			memcpy(temp, ps->array, sizeof(DataType)*newcapacity);
			//释放旧空间
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
//出栈
void StackPop(Stack* ps)
{
	assert(ps);
	ps->size--;
}
//获取栈顶元素
DataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->array[ps->size];
}
//判空
int StackEmpty(Stack* ps)
{
	assert(ps);
	return 0 == ps->size;
}
//求栈里面元素个数
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->size;
}
//销毁
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
