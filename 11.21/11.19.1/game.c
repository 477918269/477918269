#include"game.h"

void Initcontact(Contact *pcon)
{
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(*pcon->date));
}


void Addcontact(Contact *pcon)
{

		printf("����������>:\n");
		scanf("%s", pcon->date[pcon->sz].name);
		printf("����������>:\n");
		scanf("%s", pcon->date[pcon->sz].age);
		printf("�������Ա�>:\n");
		scanf("%s", pcon->date[pcon->sz].sex );
		printf("������绰����>:\n");
		scanf("%s", pcon->date[pcon->sz].tel );
		printf("������סַ>:\n");
		scanf("%s", pcon->date[pcon->sz].adress );

		pcon->sz++;
	
	
	printf("��ӳɹ�\n");
}


void Showcontact(Contact *pcon)
{
	int i = 0;
	printf("%-5s\t%-5s\t%-3s\t%-12s\t%-20s\n","����","����","�Ա�","�绰����","סַ");
	for(i=0;i<pcon-> sz;i++)
	{
		printf("%-5s\t%-5s\t%-3s\t%-12s\t%-20s\n", 
			pcon->date[i].name ,
			pcon->date[i].age ,
			pcon->date[i].sex ,
			pcon->date[i].tel ,
			pcon->date[i].adress );
	}
	
}


void Searchcontact(Contact *pcon)
{
	int i = 0;
	char name[NAME_MAX] ={0};
	printf("������Ҫ���ҵ�����");
	scanf("%d", name);
	for(i=0; i<pcon->sz;i++)
	{
		if((strcmp(pcon->date[i].name, name)== 1))
		{
			printf("%-5s\t%-5s\t%-3s\t%-12s\t%-20s\n"
					pcon->date[i].name ,
					pcon->date[i].age ,
					pcon->date[i].sex ,
					pcon->date[i].tel ,
					pcon->date[i].adress )
		}
		else if((strcmp(pcon->date[i].name, name)== 0))
		{
			printf("�������");
		}
	}
		
			
		

}

void Delcontact(Contact *pcon)
{
	int i = 0;
	char name[NAME_MAX] ={0};
	printf("������Ҫ���ҵ�����");
	scanf("%d", name);
	for(i=0; i<pcon->sz;i++)
	{
		if((strcmp(pcon->date[i].name, name)== 1))
		{
			pcon->date[i] = pcon->date[i+1]; 
		}
		else
		{
			printf("�������");
		}
	}
}


void Changecontact(Contact *pcon)
{

}
