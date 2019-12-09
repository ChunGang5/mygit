#include "contact.h"
void Menu()
{
	printf("###############################\n");
	printf("########请选择你要做的：#######\n");
	printf("#####1.ADD	2.DEL	3.MOD######\n");
	printf("#####4.SEARCH		5.SHOW#####\n");
	printf("#####6.SORT	7.Clear	0.Quit#####\n");
	printf("###############################\n");
	
}
static int compare(const void *x, const void *y)
{
	assert(x);
	assert(y);
	people_p xp = (people_p)x;
	people_p yp = (people_p)y;
	return strcmp(xp->name, yp->name);
}
static int FindPeople(contact_p ct,char name[])
{
	assert(ct);
	assert(name);
	people_p p = ct->peoples;

	for (int i = 0; i < ct->num; i++)
	{
		if (strcmp(name, p[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

int InitContact(contact_pp ct_p)	//此处要传入ct的地址，如果只传入指向结构体的指针的话，那么在函数内函数将自动构建一个指针，开辟的
									//空间指向结构体的指针根本就接收不到，所以应该传入地址，用二级指针接收
{
	assert(ct_p);
	*ct_p = (contact_p)calloc(1, sizeof(contact_t));
	if (*ct_p == NULL)
	{
		printf("初始化失败！\n");
		return -1;
	}
	(*ct_p)->cap = NUM;
	(*ct_p)->num = 0;
	return 0;
}

int AddPeople(contact_p ct)
{
	assert(ct);
	if (ct->num >= ct->cap)
	{
		printf("Sorry,Contact is full,can't add!\n");
		return -1;
	}
	int index = ct->num;
	people_p pp = &(ct->peoples[index]);
	printf("请输入你要添加的名字\n");
	scanf("%s", pp->name);
	if (FindPeople(ct, pp->name) >= 0)
	{
		printf("该人的信息已存在，请不要重复插入！\n");
		return -1;
	}
	printf("请输入你的性别\n");
	scanf("%s", pp->sex);
	printf("请输入你的年龄\n");
	scanf("%d", &(pp->age));
	printf("请输入你的电话\n");
	scanf("%s", pp->telphone);
	printf("请输入你的住址\n");
	scanf("%s", pp->address);
	ct->num++;
	printf("添加成功！\n");
	return 0;
}

int DeletePeople(contact_p ct)
{
	assert(ct);
	people_p p = ct->peoples;
	printf("请输入你要删除的人的名字\n");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = FindPeople(ct, name);
	if (i >= 0)
	{
		memcpy(p + i, p + ct->num - 1, sizeof(people_t));
		ct->num--;
		printf("删除成功！\n");
		return 0;
	}
	printf("没有这个人\n");
	return -1;
}

int SearchPeople(contact_p ct)
{
	assert(ct);
	people_p p = ct->peoples;
	printf("请输入你要查找的人的名字\n");
	char name[NAME_SIZE];
	scanf("%s", &name);
	int i = FindPeople(ct, name);
	if (i >= 0)
	{
		printf("找到了\n");
		printf("%s | %s | %d | %s | %s\n", p[i].name, p[i].sex, p[i].age, p[i].telphone, p[i].address);
		return 0;
	}
	printf("查无此人！\n");
	return -1;
}

void ShowAllPeople(contact_p ct)
{
	assert(ct);
	people_p p = ct->peoples;
	for (int i = 0; i < ct->num; i++)
	{
		printf("%s | %s | %d | %s | %s\n", p[i].name, p[i].sex, p[i].age, p[i].telphone, p[i].address);
	}
}

void ClearAllPeople(contact_p ct)
{
	assert(ct);
	ct->num = 0;
	free(ct);		//要不要free？	可以要,calloc申请过,等于直接销毁了contact表；
}

void SortAllPeople(contact_p ct)
{
	assert(ct);
	people_p p = ct->peoples;
	qsort(p, ct->num, sizeof(people_t), compare);
}