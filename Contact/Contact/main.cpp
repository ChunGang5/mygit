//2.ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
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
		printf("��ѡ��\n");
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
//�ṩ������
//1.	�����ϵ����Ϣ
//2.	ɾ��ָ����ϵ����Ϣ
//3.	����ָ����ϵ����Ϣ
//4.	�޸�ָ����ϵ����Ϣ
//5.	��ʾ������ϵ����Ϣ
//6.	���������ϵ��
//7.	����������������ϵ��
//8.  ������ϵ�˵��ļ�
//9.  ������ϵ��
