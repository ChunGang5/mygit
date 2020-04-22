#include<iostream>
#include<assert.h>
#include"queue.h"
#include<malloc.h>
using namespace std;

//��ʼ��һ���ڵ�
QNode* BuyQNode(int val)
{
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (NULL == newNode)
	{
		assert(0);	//����һ�£��Է�����ʧ�ܵ�ʱ�����ҵ�����
		return NULL;
	}
	newNode->next = NULL;
	newNode->val = val;
	return newNode;
}
//��ʼ��
void QueueInit(Queue* q)
{
	assert(q);
	q->head = BuyQNode(0);	//��һ���Թ���ʼ��ΪNULL�Ŀ�
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
//��ȡ��ͷԪ��
QDatatype QueueFront(Queue* q)
{
	assert(!QueueEmpty(q));
	return q->head->next->val;
}
//��ȡ��βԪ��
QDatatype QueueBack(Queue* q)
{
	assert(!QueueEmpty(q));
	return q->rear->val;
}
