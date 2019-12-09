//2.实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//
#include "contact.h"
int main()
{
	contact_p ct = NULL;
	if (InitContact(&ct) == -1)
	{
		return 1;
	}
	int quit = 0;
	int select = 0;
	
	while (!quit)
	{
		Menu();
		printf("请选择\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1://Add
			AddPeople(ct);
			break;
		case 2://DEL
			DeletePeople(ct);
			break;
		case 3: //MOD
			break;
		case 4: //SEARCH
			SearchPeople(ct);
			break;
		case 5: //SHOW
			ShowAllPeople(ct);
			break;
		case 6: //sort
			SortAllPeople(ct);
			break;
		case 7: //CLEAR
			ClearAllPeople(ct);
			break;
		case 0: //QUIT
			quit = 1;
			break;
		default:
			break;
		}
	}
	system("pause");
}
//提供方法：
//1.	添加联系人信息
//2.	删除指定联系人信息
//3.	查找指定联系人信息
//4.	修改指定联系人信息
//5.	显示所有联系人信息
//6.	清空所有联系人
//7.	以名字排序所有联系人
//8.  保存联系人到文件
//9.  加载联系人
