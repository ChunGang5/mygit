#include "contact.h"
void Menu()
{
	printf("###############################\n");
	printf("########��ѡ����Ҫ���ģ�#######\n");
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

int InitContact(contact_pp ct_p)	//�˴�Ҫ����ct�ĵ�ַ�����ֻ����ָ��ṹ���ָ��Ļ�����ô�ں����ں������Զ�����һ��ָ�룬���ٵ�
									//�ռ�ָ��ṹ���ָ������ͽ��ղ���������Ӧ�ô����ַ���ö���ָ�����
{
	assert(ct_p);
	*ct_p = (contact_p)calloc(1, sizeof(contact_t));
	if (*ct_p == NULL)
	{
		printf("��ʼ��ʧ�ܣ�\n");
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
	printf("��������Ҫ��ӵ�����\n");
	scanf("%s", pp->name);
	if (FindPeople(ct, pp->name) >= 0)
	{
		printf("���˵���Ϣ�Ѵ��ڣ��벻Ҫ�ظ����룡\n");
		return -1;
	}
	printf("����������Ա�\n");
	scanf("%s", pp->sex);
	printf("�������������\n");
	scanf("%d", &(pp->age));
	printf("��������ĵ绰\n");
	scanf("%s", pp->telphone);
	printf("���������סַ\n");
	scanf("%s", pp->address);
	ct->num++;
	printf("��ӳɹ���\n");
	return 0;
}

int DeletePeople(contact_p ct)
{
	assert(ct);
	people_p p = ct->peoples;
	printf("��������Ҫɾ�����˵�����\n");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = FindPeople(ct, name);
	if (i >= 0)
	{
		memcpy(p + i, p + ct->num - 1, sizeof(people_t));
		ct->num--;
		printf("ɾ���ɹ���\n");
		return 0;
	}
	printf("û�������\n");
	return -1;
}

int SearchPeople(contact_p ct)
{
	assert(ct);
	people_p p = ct->peoples;
	printf("��������Ҫ���ҵ��˵�����\n");
	char name[NAME_SIZE];
	scanf("%s", &name);
	int i = FindPeople(ct, name);
	if (i >= 0)
	{
		printf("�ҵ���\n");
		printf("%s | %s | %d | %s | %s\n", p[i].name, p[i].sex, p[i].age, p[i].telphone, p[i].address);
		return 0;
	}
	printf("���޴��ˣ�\n");
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
	free(ct);		//Ҫ��Ҫfree��	����Ҫ,calloc�����,����ֱ��������contact��
}

void SortAllPeople(contact_p ct)
{
	assert(ct);
	people_p p = ct->peoples;
	qsort(p, ct->num, sizeof(people_t), compare);
}