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
			printf("玩家赢\n");
		}
		else if(ret == 'X')
		{
			printf("电脑赢\n");
		}
		else if(ret == 'Q')
		{
			printf("平局");
		}
		Display_board(board,rows,cols);


	}

    
}
void menu()
{
	printf("*******************\n");
	printf("****1.开始游戏*****\n");
	printf("****2.结束程序*****\n");
	printf("*******************\n");
    
}
int main()
{
    int input=0;
	srand(( unsigned int) time( NULL));
	do
   {
   menu();
   
   printf("请输入:>");
   scanf("%d",&input);

   switch(input)
   {
   case 1:
	   game();
	   break;

   case 2:
	   printf("游戏结束");
       break;

   default:
	   printf("输入错误，请重新输入");
	   break;

   }
   }while(input);
   return 0;
}
