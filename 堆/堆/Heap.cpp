#include<iostream>
#include"Heap.h"
#include<malloc.h>
#include<assert.h>
using namespace std;

void Swap(Heap* hp, int parent, int child)
{
	int temp = 0;
	temp = hp->array[parent];
	hp->array[parent] = hp->array[child];
	hp->array[child] = temp;
}
//parent����Ҫ�����Ľڵ���±꣬���Ѻ�ɾ��ʱ��Ҫ�õ����µ���
void AdjustDown(Heap* hp,int parent)
{
	int child = parent * 2 + 1;
	//������ӵ��±�>=�ڵ���������ýڵ�û�к�����
	while (child<hp->size)
	{
		
		//�ڱ�֤�Һ��Ӵ��ڵ�����±Ƚ��ҳ���С�ӽڵ�
		if (child+1 < hp->size && hp->array[child + 1] < hp->array[child])
			child += 1;
		//�����С�ڵ��˫�׽�㻹С���ͽ���
		if (hp->array[child] < hp->array[parent])
		{
			Swap(hp, parent, child);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			return;
		}
	}
}
//����ʱ��Ҫ�õ����ϵ���
void AdjectHeapUp(Heap* hp, int child)
{
	int parent = (child - 1) >> 2;
	while (/*parent>=0*/ child)
	{
		if (hp->array[child] < hp->array[parent])
			{
				Swap(hp, parent, child);
				child = parent;
				parent = (child - 1) >> 2;
			}
			else
			{
				return;
			}
	}
	
}
void CreateHeap(Heap* hp, HDataType arr[], int size)
{
	//����һ����
	assert(hp);
	hp->array = (HDataType*)malloc(sizeof(HDataType)*size);
	if (NULL == hp->array)
	{
		assert(0);
		return;
	}
	hp->capacity = size;
	hp->size = size;
	//��ʼ��һ������Ķ�,�������ϵ���
	for (int root =(size-2)>>1; root >= 0; --root)	//�õ��������壬(i-1)/2==˫�׽ڵ��±�
	{
		AdjustDown(hp, root);
	}
}
void CheckCapacity(Heap* hp)
{
	assert(hp);
	if (hp->size >= hp->capacity)
	{
		//1.�����¿ռ�
		HDataType* temp = (HDataType*)malloc(sizeof(HDataType)*hp->capacity * 2);
		if (NULL == temp)
		{
			assert(0);
			return;
		}
		//2.�����ɿռ�Ԫ��
		memcpy(temp, hp->array, sizeof(HDataType)*hp->size);
		//3.�ͷžɿռ�
		//���ͷţ���ֹԪ�ظ��ǳ���
		free(hp->array);
		hp->array = temp;
		hp->capacity = hp->capacity * 2;
	}
}

void HeapPush(Heap* hp, HDataType data)
{
	assert(hp);
	CheckCapacity(hp);
	hp->array[hp->size] = data;
	hp->size++;
}
void HeapPop(Heap* hp)
{
	assert(hp);
	if (NULL == hp->array)
	{
		return;
	}
	Swap(hp, 0, hp->size - 1);
	hp->size--;
	AdjustDown(hp, 0);
}
HDataType HeapTop(Heap* hp)
{
	assert(hp&&!HeapIsEmpty(hp));
	return hp->array[0];
}
HDataType HeapSize(Heap* hp)
{
	assert(hp);
	return hp->size;
}
int HeapIsEmpty(Heap* hp)
{
	assert(hp);
	/*if (0 == hp->size)
	{
		return 1;
	}
	else
		return 0;*/
	return 0 == hp->size;
}
void HeapDestroy(Heap* hp)
{
	assert(hp);
	if (hp->array)
	{
		free(hp->array);
		hp->array = NULL;
		hp->capacity = 0;
		hp->size = 0;
	}
}

/*�����򣺽���->С�ѣ�����->��ѣ���������*/
void HeapAdjuct(int array[], int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size&&array[child + 1] < array[child])
			child += 1;
		if (array[child] < array[parent])
		{
			HDataType temp = array[child];
			array[child] = array[parent];
			array[parent] = temp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			return;
		}
		
	}
}
void HeapSort(HDataType array[],int size)
{
	//1.����
	for (int root = (size - 2) >> 1; root <= 0; root--)
	{
		HeapAdjuct(array, size, root);
	}
	//2.���ö�ɾ��˼������
	int end = size - 1;
	while (end)
	{
		HDataType temp = array[end];
		array[end] = array[0];
		array[0] = array[end];
		HeapAdjuct(array, end, 0);
		end--;
	}
}
int main()
{
	return 0;
}