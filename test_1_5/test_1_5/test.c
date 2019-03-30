#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr + 1);
//	system("pause");
//
//}

//int main()
//{
//	char ch = 'w';
//    char *p = &ch;
//	printf("%c\n", *p);
//	printf("%p\n", p);
//	printf("%p\n", &p);
//	system("pause");
//	return 0;
//}


//void int_swop(int* a,int* b)
//{
//	int temp = 0;-
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d %d", &a, &b);
//	
//	int_swop(&a, &b);
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}

//
//int bissextile(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main(){
//	int year = 0;
//	int ret;
//	printf("请输入一个年份\n");
//	scanf("%d", &year);
//	ret = bissextile(year);
//	if (ret == 1)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	
//	system("pause");
//	return 0;
//}


//
//int prime(num)
//{
//	int i = 0;
//	for (i = 2; i < num; i++){
//		if (num%i == 0)
//			return 0;
//	}
//	
//		return 1;
//}
//
//int main()
//{
//	int num = 0;
//	int ret;
//	printf("请输入一个数\n");
//	scanf("%d", &num);
//	ret = prime(num);
//	if (ret == 1)
//	{
//		printf("这个数是素数\n");
//	}
//	else
//	{
//		printf("这个数不是素数\n");
//	}
//	system("pause");
//	return 0;
//}



//int multiplication(int row, int line)
//{
//	int i, j;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= line; j++)
//		{
//			printf("%d * %d = %d   ", i, j, i*j);
//		}
//		printf("   \n");
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入要打印的行列数\n");
//	scanf("%d %d", &i,&j);
//	multiplication(i, j);
//	system("pause");
//}



//void reverse(int arr[5], int sz)
//{
//	int i;
//	int temp = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = temp;
//
//	}
//}
//void init(int arr[5], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 5;
//	}
//}
//void empty(int arr[5],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//	
//}
//
//int main()
//{
//	int i = 0;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	empty(arr, sz);
//	init(arr, sz);
//	reverse(arr, sz);
//	system("pause");
//	return 0;
//}



//int search_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & 1 == 1)
//		{
//
//			count++;
//		}
//		n >>= 1;
//	}
//	return count;
//
//}
//
//int main()
//{
//	int num = -1;
//	int ret = search_bit_one(num);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}




//int search_bit_one(num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num&(num - 1);
//		count++;
//	}
//
//}
//int main()
//{
//	int num = 10;
//	int ret = search_bit_one(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}





//int main()
//{
//	int num = 1;
//	int i;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	system("pause");
//}




//int main()
//{
//	int num = 123;
//	while (num)
//	{
//		printf("%d\n", num % 10);
//		num = num / 10;
//		
//	}
//	system("pause");
//	return 0;
//}


//int search_bit_one(k)
//{
//	int count = 0;
//	while (k)
//	{
//		k = k&(k - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 1999;
//	int m = 2299;
//	int k = n^m;
//	int ret = search_bit_one(k);
//	printf("%d\n", ret);
//	system("pause");
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((1 == (b == 2) + (c = 3)))
//							&& (1 == (b == 2) + (e == 4))
//							&& (1 == (c == 1) + (d == 2))
//							&& (1 == (c == 5) + (d == 3))
//							&& (1 == (e == 4) + (a == 1))
//						{
//								if (a*b*c*d*e = 125)
//								{
//									printf("%d %d %d %d %d\n", a, b, c, d, e);
//								}
//							}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	
//}





//int main()
//{
//	int murderer = 0;
//	for (murderer = 'a'; murderer <= 'd'; murderer++)
//	{
//		if ((murderer != 'a') + (murderer == 'c') + (murderer == 'd') + (murderer != 'd') == 3)
//		{
//			printf("%c \n", murderer);
//		}
//	}
//	system("pause");
//}




//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 10;
//	int j = 10;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j== 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i>=2 && j > =1)
//			{
//				arr[i][j] =arr[i - 1][j] + arr[i - 1][j - 1] ;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d	", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//
//}




//int main()
//{
//	int a = 2;
//	int b = 6;
//	int c = a + ((b-a) / 2);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}




//unsigned int reverse_bit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		
//			sum <<= 1;
//			sum |= ((value >> i) & 1);      //sum=sun||((value>>i)&1)
//
//	}
//	return sum;
//
//}
//
//int main()
//{
//	int n = 25;
//	unsigned int ret =reverse_bit(n);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}






//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int arr[5] = { 1, 2, 3, 2, 3 };
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		n ^= arr[1];
//	}
//	printf("%d", n);
//	system("pasue");
//	
//}





//int main()

//{

//	int arr[] = {1,2,3,4,5,1,2,3,4};

//	int i = 0;

//	int num = 0;

//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)

//	{

//		num ^= arr[i];

//	}

//	printf("num = %d\n", num);

//	system("pause");

//	return 0;

//}




//void swop(char *left, char *right)
//{
//	assert(*left != NULL);
//	assert(*right != NULL);
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void reverse(char *str, int len)
//{
//	
//	assert(str != NULL);
//	swop(str, str + len - 1);
//
//	while (*str)
//
//	{
//
//		char *start = str;
//
//		while ((*str != ' ') && (*str != '\0'))
//
//		{
//
//			str++;
//
//		}
//
//		swop(start, str - 1);
//
//		if (*str != '\0')
//
//			str++;
//
//	}
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = strlen(arr);
//	reverse(arr, len);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}




//void sort(int *arr[], int sz)      //*特别重要；不然只是arr的一份临时拷贝
//{
//	int i;
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			continue;
//		}
//		else
//		{
//			if (i < sz)
//			{
//				arr[i] ^= arr[sz];
//				arr[sz] ^= arr[i];
//				arr[i] ^= arr[sz];
//				i--;
//				sz--;
//			}
//			
//		}
//	}
//}
//int main()
//{
//
//	int arr[8] = { 1, 5, 2, 4, 6, 7, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//
//		printf("%d   ", arr[i]);
//	}
//	printf("\n  ");
//	system("pause");
//	return 0;
//
//}




//int search(int arr[3][3], int key, int rows, int cols)
//{
//	int row = 0;
//	int col = cols-1;
//	while ((row >= 0) && (col <= cols - 1))
//	{
//		if (key < arr[row][col])
//		{
//			col--;
//		}
//		if (key>arr[row][col])
//		{
//			row++;
//		}
//		if (key = arr[row][col])
//		{
//			return 1;
//		}
//		return 0;
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int key = 9;
//	int ret = search(arr, 9, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	if (ret == 0)
//	{
//		printf("没有找到\n");
//	}
//	system("pause");
//
//}




//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { 'a', 'b','\0' };
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}




//int main()
//{
//	int arr[7] = { 1, 2, 3, 1, 2, 5 };
//	int num1 = 0;
//	int num2 = 0;
//	int p=0;
//	int i=0;
//	int temp=0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		temp ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((temp >> 1) & 1) == 1)
//		{
//			p = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> p) & 1 ) == 1)
//		{
//			num1 ^= arr[i];
//		}
//	}
//	num2 = temp^num1;
//	printf("%d	%d\n", num1, num2);
//	system("pause");
//	return 0;










//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	printf("请输入金额\n");
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	system("pause");
//	return 0;
//
//}





//int main()
//{
//
//	int a = 10;
//	int *p = &a;
//	printf("%d\n", *p);
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	system("pause");
//	return 0;
//
//}




//void my_strcpy(char *dest, char *str)
//{
//	assert(dest != NULL);
//	assert(str != NULL);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//
//}
//int main()
//{
//	char arr1[10] = { 'L', 'K', 'C', '\0' };
//	char arr2[10] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	system("pause");
//	return 0;
//}




//char* my_strcat(char *dest, const char *str)
//{
//	assert(str != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest = *str)
//	{
//		;
//	}
//	
//}
//int main()
//{
//	char arr1[10] = { 'L', 'K', 'C', '\0' };
//	char arr2[10] = {'C','G','\0'};
//	my_strcat(arr2, arr1);
//
//	printf("%s\n",arr1);
//	system("pause");
//	return 0;
//}





//char *my_strstr(const char *str1, const char *str2)
//{
//	assert(str1);
//	assert(str2);
//	char *cp = (char*)str1;
//	char *substr = (char*)str2;
//	char *s1 = NULL;
//	if (*str2 == '\0')
//	{
//		return NULL;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr && (*s1 == *substr))
//		{
//			s1++;
//			substr++;
//
//		}
//		if (*substr = '\0')
//			return cp;
//		cp++;
//	}
//}
//int main()
//{
//	char arr[] = "LKC";
//	char* ret = my_strstr(arr, 'C');
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}




//char *my_mencpy(void *dest, const char *src, size_t count)
//{
//	void *ret = dest;
//	while (count--)
//	{
//		*(char *)dest = *(char*)src;
//		dest = (char *)dest + 1;
//		src = (char *)src + 1;
//
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char arr2[20] = { 0 };
//	my_mencpy(arr1 + 2, arr1, 16);
//	system("pause");
//	return 0;
//}




//void *memmove(void *dst, const char *src, size_t count)
//{
//	void *ret = dst;
//	if (dst <= src || (char*)dst >= ((char*)src + count)
//	{
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst + 1;
//			src = (char*)src + 1;
//
//		}
//	}
//	else
//	{
//		dst = (char *)dst + count - 1;
//		src = (char *)src + count - 1;
//		while (count--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return ret;
//
//}
//
//
//int main()
//{
//	char arr1[10] = {1,2,13,4,5,6,7,8,9}
//	char arr2[10] = { 0 };
//	my_memove(arr1, arr2, 14);
//	system("pause");
//	return 0;
//}




////冒泡排序
//int BubbleSort(int arr[],int n)
//{
//	int i;
//	int j;
//	int temp;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1; j++)      //不能只考虑到比较次数不考虑到数组的下标从0开始，这样容易引起越界
//		{
//			if (arr[j]>arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//
//			}
//
//		}
//	}
//}
//int main()
//{
//	int arr[9] = { 1, 3, 2, 5, 4, 6, 8, 7, 9 };
//	int ret = BubbleSort(arr, 9);
//	int k;
//	for (k = 0; k < 9; k++)
//	{
//          printf("%d ", arr[k]);
//	}
//	
//	system("pause");
//	return 0;
//}




////折半查找
//int BinarySearch(int arr[], int n, int key)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (key > arr[mid])
//			left = mid + 1;
//		if (key = mid)
//			return mid;
//		if (key < arr[mid])
//			right = mid - 1;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int ret = BinarySearch(arr, 10, 5);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("%d\n", ret);
//	system("pause");
//	return 0;
//}