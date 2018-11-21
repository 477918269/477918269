#include"game.h"

void Initcontact(Contact *pcon)
{
	pcon->sz = 0;
	memset(pcon->date, 0, sizeof(*pcon->date));
}


void Addcontact(Contact *pcon)
{

		printf("请输入姓名>:\n");
		scanf("%s", pcon->date[pcon->sz].name);
		printf("请输入年龄>:\n");
		scanf("%s", pcon->date[pcon->sz].age);
		printf("请输入性别>:\n");
		scanf("%s", pcon->date[pcon->sz].sex );
		printf("请输入电话号码>:\n");
		scanf("%s", pcon->date[pcon->sz].tel );
		printf("请输入住址>:\n");
		scanf("%s", pcon->date[pcon->sz].adress );

		pcon->sz++;
	
	
	printf("添加成功\n");
}


void Showcontact(Contact *pcon)
{
	int i = 0;
	printf("%-5s\t%-5s\t%-3s\t%-12s\t%-20s\n","姓名","年龄","性别","电话号码","住址");
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
	printf("请输入要查找的名字");
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
			printf("输出错误");
		}
	}
		
			
		

}

void Delcontact(Contact *pcon)
{
	int i = 0;
	char name[NAME_MAX] ={0};
	printf("请输入要查找的名字");
	scanf("%d", name);
	for(i=0; i<pcon->sz;i++)
	{
		if((strcmp(pcon->date[i].name, name)== 1))
		{
			pcon->date[i] = pcon->date[i+1]; 
		}
		else
		{
			printf("输入错误");
		}
	}
}


void Changecontact(Contact *pcon)
{

}
