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

//初始化
void QueueInit(Queue* q);

void QueuePush(Queue* q,QDatatype val);
void QueuePop(Queue* q);
int QueueSize(Queue* q);
int  QueueEmpty(Queue* q);
//获取对头元素
QDatatype QueueFront(Queue* q);
//获取队尾元素
QDatatype QueueBack(Queue* q);