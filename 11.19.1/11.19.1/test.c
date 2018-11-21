
#include"game.h"

void menu()
{
	printf("****1. add    2. del      *******\n");
	printf("****3. search 4. change   *******\n");
	printf("****5. show   6. empty    *******\n");
	printf("****7. sort   0. exit     *******\n");
}
int main()
{
	int input = 0;
	Contact con;
	Initcontact(&con); //初始化数组
	do
	{
		menu();
		printf("请输入你要使用的项目\n");
		scanf("%d",&input);
		switch(input)
		{
		case add:
			Addcontact(&con);
			break;
		case del:
		
			break;
		case search:
			Searchcontact(&con);
			break;
		case change:
		
			break;
		case show:
			
			break;
		case empty:
		
			break;
		case sort:
		
			break;
		case exit:
			printf("退出程序\n");
			break;
		default:
			printf("输入非法,请从新输入\n");
			break;
		}
	}while(input);
		
	return 0;
}