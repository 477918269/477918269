#include"game.h"

void Initcontact(Contact *pcon)
{
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(*pcon->date));
}


void Addcontact(Contact *pcon)
{
	int count = 1;
	while(count--)
	{
		printf("����������>:\n");
		scanf("%d", pcon->name);
		printf("����������>:\n");
		scanf("%d", pcon->age);
		printf("�������Ա�>:\n");
		scanf("%d", pcon->sex );
		printf("������绰����>:\n");
		scanf("%d", pcon->tel);
		printf("������סַ>:\n");
		scanf("%d", pcon->adress);
	
	}
}


//void Searchcontact(Contact *pcon)
//{
//	printf("%-5s\t%-5d\t%-3d\t%-12d\t%-20d\t","����","����","�Ա�","�绰����","סַ");
//	while(pcon->sz--)
//	{
//		printf("%-5s\t%-5d\t%-3d\t%-12d\t%-20d\t", 
//			pcon->name,
//			pcon->age,
//			pcon->sex,
//			pcon->tel,
//			pcon->adress);
//
//	}
//}
