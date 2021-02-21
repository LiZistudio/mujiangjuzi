#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>


#define ROW 3
#define COL 3

//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//��������������Ϸ״̬
//���Ӯ-'*'
//����Ӯ-'#'
//ƽ��-'Q'
//����-'C'
char IsWin(char board[ROW][COL], int row, int col);
