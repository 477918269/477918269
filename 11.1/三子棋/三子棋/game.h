#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



#define rows 3
#define cols 3


void Init_board(char board[rows][cols],int Rows,int Cols);
void Display_board(char board[rows][cols],int Rows,int Cols);
void ComputerMove(char board[rows][cols],int Rows,int Cols);
void PlayerMove(char board[rows][cols],int Rows,int Cols);
char Is_Win(char board[rows][cols],int Rows,int Cols);
int Is_Full(char board[rows][cols],int Rows,int Cols);	   







