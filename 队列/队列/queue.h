typedef int QDatatype;
typedef struct QNode
{
	struct QNode* next;
	QDatatype val;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* rear;
	int _size;
};

//��ʼ��
void QueueInit(Queue* q);

void QueuePush(Queue* q,QDatatype val);
void QueuePop(Queue* q);
int QueueSize(Queue* q);
int  QueueEmpty(Queue* q);
//��ȡ��ͷԪ��
QDatatype QueueFront(Queue* q);
//��ȡ��βԪ��
QDatatype QueueBack(Queue* q);