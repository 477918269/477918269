
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
	Initcontact(&con); //��ʼ������
	do
	{
		menu();
		printf("��������Ҫʹ�õ���Ŀ\n");
		scanf("%d",&input);
		switch(input)
		{
		case add:
			Addcontact(&con);
			break;
		case del:
			Delcontact(&con);
			break;
		case search:
			Searchcontact(&con);
			break;
		case change:
			Changecontact(&con);
			break;
		case show:
			Showcontact(&con);
			break;
		case empty:
		
			break;
		case sort:
		
			break;
		case exit:
			printf("�˳�����\n");
			break;
		default:
			printf("����Ƿ�,���������\n");
			break;
		}
	}while(input);
		
	return 0;
}