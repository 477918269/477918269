#include"game.h"
 

void game()
{
	char board[rows][cols] = {0};
	int ret=0;
	Init_board(board,rows,cols);
	Display_board(board,rows,cols);
	
	while(1)
	{
		ComputerMove(board, rows,cols);
		ret = Is_Win(board, rows, cols);
			if(ret == ' ')
				break;
	    Display_board(board,rows,cols);
        PlayerMove(board, rows, cols);
		ret = Is_Win(board, rows, cols);
			if(ret == ' ')
				break;
		Display_board(board,rows,cols);
		if(ret =='0')
		{
			printf("���Ӯ\n");
		}
		else if(ret == 'X')
		{
			printf("����Ӯ\n");
		}
		else if(ret == 'Q')
		{
			printf("ƽ��");
		}
		Display_board(board,rows,cols);


	}

    
}
void menu()
{
	printf("*******************\n");
	printf("****1.��ʼ��Ϸ*****\n");
	printf("****2.��������*****\n");
	printf("*******************\n");
    
}
int main()
{
    int input=0;
	srand(( unsigned int) time( NULL));
	do
   {
   menu();
   
   printf("������:>");
   scanf("%d",&input);

   switch(input)
   {
   case 1:
	   game();
	   break;

   case 2:
	   printf("��Ϸ����");
       break;

   default:
	   printf("�����������������");
	   break;

   }
   }while(input);
   return 0;
}
