#include<iostream>
using namespace std;
//插入排序
//void InserSort(int arr[], int n)
//{
//	int key;
//	for (int i = 1; i < n; i++)	//五个数只需要排四次
//	{
//		key = arr[i];
//		int end = i - 1;
//		while (arr[end] > key && end>=0)
//		{
//			arr[end + 1] = arr[end];
//			end--;
//		}
//		arr[end + 1] = key;
//	}
//}

//希尔排序
//void ShellSort(int arr[], int n,int gap)	//差
//{
//	while (gap >= 1)
//	{
//		int key;
//		for (int i = gap; i < n; i++)	//五个数只需要排四次
//		{
//			key = arr[i];
//			int end = i - gap;
//			while (arr[end] > key && end >= 0)
//			{
//				arr[end + gap] = arr[end];
//				end-=gap;
//			}
//			arr[end + gap] = key;
//		}
//		gap--;
//	}
//	
//}

//直接选择排序
//void QuickSelectionSort(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min;
//		int temp;
//		for (int j = i + 1; j < n; j++)
//		{
//			min = i;
//			if (arr[j] < arr[min])
//			{
//				min = j;
//			}
//		}
//		//交换放在外层，内部for只是找出最值的下标
//		temp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = temp;
//	}
//}

//堆排序
/*堆排序：降序->小堆；升序->大堆；向下排序*/
//void HeapAdjuct(int array[], int size, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < size)
//	{
//		if (child + 1 < size&&array[child + 1] > array[child])
//			child += 1;
//		if (array[child] > array[parent])
//		{
//			int temp = array[child];
//			array[child] = array[parent];
//			array[parent] = temp;
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			return;
//		}
//
//	}
//}
//void HeapSort(int array[], int size)
//{
//	//1.建堆
//	for (int root = (size - 2) >> 1; root >= 0; root--)
//	{
//		HeapAdjuct(array, size, root);
//	}
//	//2.采用堆删除思想排序
//	int end = size - 1;
//	while (end)
//	{
//		int temp = array[end];
//		array[end] = array[0];
//		array[0] = temp;
//		HeapAdjuct(array, end, 0);
//		end--;
//	}
//}

//冒泡排序
//void BubbleSort(int arr[], int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] =temp;
//			}
//		}
//	}
//}

//快速排序
//划分函数
int partition(int *arr, int i, int j)
{
	//划分的元素，我取最左边的数
	int temp = arr[i];
	while (i < j)
	{
		//从右向左找到第一个小于划分值的数
		while (arr[j] >= temp&&i<j)
		{
			j--;
		}
		if (i < j)
		{
			arr[i] = arr[j];
			i++;
		}
		//从左往右找到第一个大于划分值的数的位置
		while (arr[i] <= temp&&i < j)
		{
			i++;
		}
		if (i < j)
		{
			arr[j] = arr[i];
			j--;
		}
	}
	//当i=j时，本次划分完成
	arr[i] = temp;
	//将本次划分的元素所在下标返回，依据这个划分范围
	return i;
}
void QuickSort(int *arr, int i, int j)
{
	int k;
	while (i < j)
	{
		k = partition(arr, i, j);
		//递归划分左边
		QuickSort(arr, i, k - 1);
		//递归划分右边
		QuickSort(arr, k + 1, j);
	}
}
int main()
{
	int arr[8] = { 4, 3, 7, 1, 2, 8, 6, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//InserSort(arr, n);
	//ShellSort(arr, n, 3);
	//QuickSelectionSort(arr, n);
	//HeapSort(arr, n);
	//BubbleSort(arr, n);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	QuickSort(arr, 0, n-1);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	cin.get();
	return 0;
}