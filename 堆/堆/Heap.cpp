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
//parent代表要调整的节点的下标，建堆和删除时需要用到向下调整
void AdjustDown(Heap* hp,int parent)
{
	int child = parent * 2 + 1;
	//如果左孩子的下标>=节点总数，则该节点没有孩子了
	while (child<hp->size)
	{
		
		//在保证右孩子存在的情况下比较找出最小子节点
		if (child+1 < hp->size && hp->array[child + 1] < hp->array[child])
			child += 1;
		//如果最小节点比双亲结点还小，就交换
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
//插入时需要用到向上调整
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
	//创建一个堆
	assert(hp);
	hp->array = (HDataType*)malloc(sizeof(HDataType)*size);
	if (NULL == hp->array)
	{
		assert(0);
		return;
	}
	hp->capacity = size;
	hp->size = size;
	//初始化一个有序的堆,从下往上调整
	for (int root =(size-2)>>1; root >= 0; --root)	//用到了性质五，(i-1)/2==双亲节点下标
	{
		AdjustDown(hp, root);
	}
}
void CheckCapacity(Heap* hp)
{
	assert(hp);
	if (hp->size >= hp->capacity)
	{
		//1.申请新空间
		HDataType* temp = (HDataType*)malloc(sizeof(HDataType)*hp->capacity * 2);
		if (NULL == temp)
		{
			assert(0);
			return;
		}
		//2.拷贝旧空间元素
		memcpy(temp, hp->array, sizeof(HDataType)*hp->size);
		//3.释放旧空间
		//先释放，防止元素覆盖出错
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

/*堆排序：降序->小堆；升序->大堆；向下排序*/
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
	//1.建堆
	for (int root = (size - 2) >> 1; root <= 0; root--)
	{
		HeapAdjuct(array, size, root);
	}
	//2.采用堆删除思想排序
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