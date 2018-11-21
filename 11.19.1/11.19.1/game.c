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
		printf("请输入姓名>:\n");
		scanf("%d", pcon->name);
		printf("请输入年龄>:\n");
		scanf("%d", pcon->age);
		printf("请输入性别>:\n");
		scanf("%d", pcon->sex );
		printf("请输入电话号码>:\n");
		scanf("%d", pcon->tel);
		printf("请输入住址>:\n");
		scanf("%d", pcon->adress);
	
	}
}


//void Searchcontact(Contact *pcon)
//{
//	printf("%-5s\t%-5d\t%-3d\t%-12d\t%-20d\t","姓名","年龄","性别","电话号码","住址");
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
