#include<iostream>
#include<assert.h>
#include"queue.h"
#include<malloc.h>
using namespace std;

//初始化一个节点
QNode* BuyQNode(int val)
{
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (NULL == newNode)
	{
		assert(0);	//断言一下，以防申请失败的时候，难找到错误
		return NULL;
	}
	newNode->next = NULL;
	newNode->val = val;
	return newNode;
}
//初始化
void QueueInit(Queue* q)
{
	assert(q);
	q->head = BuyQNode(0);	//这一步吃过初始化为NULL的亏
	q->rear = q->head;
	q->_size = 0;
}

void QueuePush(Queue* q, QDatatype val)
{
	assert(q);
	QNode* newNode = BuyQNode(val);
	q->rear->next = newNode;
	q->rear = newNode;
	q->_size++;
}
void QueuePop(Queue* q)
{
	assert(q);
	if (QueueEmpty(q))
	{
		return;
	}
	QNode* qDelNode = NULL;
	qDelNode = q->head->next;
	q->head->next = qDelNode->next;
	free(qDelNode);
	q->_size--;
}
int QueueSize(Queue* q)
{
	assert(q);
	return q->_size;
}
int  QueueEmpty(Queue* q)
{
	assert(q);
	return 0 == q->_size;
}
//获取对头元素
QDatatype QueueFront(Queue* q)
{
	assert(!QueueEmpty(q));
	return q->head->next->val;
}
//获取队尾元素
QDatatype QueueBack(Queue* q)
{
	assert(!QueueEmpty(q));
	return q->rear->val;
}
