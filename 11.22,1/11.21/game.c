#include"game.h"

void Initcontact(Contact *pcon)
{
	pcon->sz = 0;
	pcon->cp = 0;
	memset(pcon->date, 0, sizeof(pcon->date));
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


int _Searchcontact( Contact *pcon, char name[])

{
	int i = 0;
	for(i=0; i<pcon->sz; i++)
	{
		if((strcmp(pcon->date[i].name ,name ))== 0)
		{
			return i;
		}
	}
	return -1;
}


void Delcontact(Contact *pcon)
{
	
	int pos = 0;
	char name[MAX_NAME] ={0};
	printf("������Ҫɾ��������");
	scanf("%s", name);
	pos = _Searchcontact(pcon, name);
	if(-1 == pos)
	{
		printf("�����������������\n");
	}
	else
	{
		int i = 0;
		for(i=pos; i<pcon->sz-1; i++ )
		{
			pcon->date [i] = pcon->date[i+1];
		}
		pcon->sz --;
		printf("ɾ���ɹ�\n");
	}

}

void Searchcontact(Contact *pcon)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("��������Ҫ�����˵�����>:");
	scanf("%s",name);
	pos =  _Searchcontact(pcon, name);
	if(-1 == pos)
	{
		printf("����ʧ��");
	}
	else
	{
		int i = 0;
		i = pos;
		printf("%-5s\t%-5s\t%-3s\t%-12s\t%-20s\n", 
			pcon->date[i].name ,
			pcon->date[i].age ,
			pcon->date[i].sex ,
			pcon->date[i].tel ,
			pcon->date[i].adress );
	}
		
}
void Changecontact(Contact *pcon)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("��������Ҫ�����˵�����>:");
	scanf("%s",name);
	pos =  _Searchcontact(pcon, name);
	if(-1 == pos)
	{
		printf("����ʧ��");
	}
	else
	{
		
		pcon->cp = pos;
		printf("����������>:\n");
		scanf("%s", pcon->date[pcon->cp].name);
		
		printf("����������>:\n");
		scanf("%s", pcon->date[pcon->cp].age);
		printf("�������Ա�>:\n");
		scanf("%s", pcon->date[pcon->cp].sex );
		printf("������绰����>:\n");
		scanf("%s", pcon->date[pcon->cp].tel );
		printf("������סַ>:\n");
		scanf("%s", pcon->date[pcon->cp].adress );
		 
		
		
	}
	
}

void Emptycontact(Contact *pcon)
{
	memset(pcon->date, 0, sizeof(pcon->date));
	pcon->cp = 0;
	pcon->sz = 0;
}
