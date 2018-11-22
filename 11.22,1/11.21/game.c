#include"game.h"

void Initcontact(Contact *pcon)
{
	pcon->sz = 0;
	pcon->cp = 0;
	memset(pcon->date, 0, sizeof(pcon->date));
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
	printf("请输入要删除的名字");
	scanf("%s", name);
	pos = _Searchcontact(pcon, name);
	if(-1 == pos)
	{
		printf("输入错误，请重新输入\n");
	}
	else
	{
		int i = 0;
		for(i=pos; i<pcon->sz-1; i++ )
		{
			pcon->date [i] = pcon->date[i+1];
		}
		pcon->sz --;
		printf("删除成功\n");
	}

}

void Searchcontact(Contact *pcon)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入你要查找人的姓名>:");
	scanf("%s",name);
	pos =  _Searchcontact(pcon, name);
	if(-1 == pos)
	{
		printf("查找失败");
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
	printf("请输入你要查找人的姓名>:");
	scanf("%s",name);
	pos =  _Searchcontact(pcon, name);
	if(-1 == pos)
	{
		printf("查找失败");
	}
	else
	{
		
		pcon->cp = pos;
		printf("请输入姓名>:\n");
		scanf("%s", pcon->date[pcon->cp].name);
		
		printf("请输入年龄>:\n");
		scanf("%s", pcon->date[pcon->cp].age);
		printf("请输入性别>:\n");
		scanf("%s", pcon->date[pcon->cp].sex );
		printf("请输入电话号码>:\n");
		scanf("%s", pcon->date[pcon->cp].tel );
		printf("请输入住址>:\n");
		scanf("%s", pcon->date[pcon->cp].adress );
		 
		
		
	}
	
}

void Emptycontact(Contact *pcon)
{
	memset(pcon->date, 0, sizeof(pcon->date));
	pcon->cp = 0;
	pcon->sz = 0;
}
