#define _CRT_SECURE_NO_WARNINGS 1

#include "saolei.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			board[i][j] =set;
		}
	}
}
void DispalyBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for ( i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for ( j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row+1;//1~9
		int y = rand() % col+1;
		if (board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//踩雷
			if (mine[x][y]=='1')
			{
				printf("很遗憾，你被炸死了！！！\n");
				DispalyBoard(mine, row, col);
				break;
			}
			//不是雷，计算周围八个坐标中有几个雷
			else
			{
				int count=get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				DispalyBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (win==row*col-EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		DispalyBoard(mine, row, col);
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1]-8*'0';
}