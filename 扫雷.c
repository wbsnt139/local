#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define EASY_COUNT 10
#define NORMAL_COUNT 20
#define HARD_COUNT 30
#define ROWS ROW+2
#define COLS COL+2
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int GetCount(char mine[ROWS][COLS], int x, int y);
int Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
void game()
{
	//�׵���Ϣ�洢
	//1.���ó����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);
}
void menu()
{
	printf("******************************************************************************\n");
	printf("***********                !��ӭ����ɨ��С��Ϸ!                 **************\n");
	printf("******************************************************************************\n");
	printf("***********                     ��ѡ��һ�                    **************\n");
	printf("******************************************************************************\n");
	printf("***********                1.��ʼ    |    0.�˳�                **************\n");
	printf("******************************************************************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ�� >:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");
			printf("******************************************************************************\n");
			printf("******************************************************************************\n");
			printf("***********                                                     **************\n");
			printf("***********                     !�˳��ɹ���                     **************\n");
			printf("***********                                                     **************\n");
			printf("******************************************************************************\n");
			printf("******************************************************************************\n");
			break;
		default:
			system("cls");
			printf("\a");
			printf("******************************************************************************\n");
			printf("******************************************************************************\n");
			printf("***********                                                     **************\n");
			printf("***********              ѡ�����ִ���������ѡ��!              **************\n");
			printf("***********                                                     **************\n");
			printf("******************************************************************************\n");
			printf("******************************************************************************\n");
			Sleep(1600);
			system("cls");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("                         (1)(2)(3)(4)(5)(6)(7)(8)(9)\n");
	for (i = 1; i <= row; i++)
	{
		printf("                     (%d) ",i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("�������Ų��׵����� >:");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("\a");
				DisplayBoard(mine, ROW, COL);
				Sleep(1800);
				system("cls");
				printf("\a");
				printf("******************************************************************************\n");
				printf("******************************************************************************\n");
				printf("***********                                                     **************\n");
				printf("***********               !������ը����!ɨ��ʧ��!               **************\n");
				printf("***********                                                     **************\n");
				printf("***********                ...�밴�س�������...                 **************\n");
				printf("***********                                                     **************\n");
				printf("******************************************************************************\n");
				printf("******************************************************************************\n");
				getchar();
				getchar();
				system("cls");
				break;
			}
			else if (show[x][y] >= '0' && show[x][y] < '9')
			{
				printf("���������Ų��!����������:\n");
				printf("\a");
			}
			else
			{
				system("cls");
				int count = GetCount(mine, x, y);//����x,y������Χ�׵ĸ���
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				if (show[x][y] == '0' && count == 0)
				{
					win += Unfold(mine, show, x, y);
				}
				win++;
			}
		}
		else
		{
			printf("����Ƿ�!��ʽΪ x,y !����������:\n");
			printf("\a");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		system("cls");
		DisplayBoard(mine, ROW, COL);
		Sleep(2200);
		system("cls");
		printf("******************************************************************************\n");
		printf("******************************************************************************\n");
		printf("***********                                                     **************\n");
		printf("***********                  !��ϲ����ȡ��ʤ����                **************\n");
		printf("***********                                                     **************\n");
		printf("***********                ...�밴�س�������...                 **************\n");
		printf("***********                                                     **************\n");
		printf("******************************************************************************\n");
		printf("******************************************************************************\n");
		getchar();
		getchar();
		system("cls");
	}
}
int GetCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + 
		   mine[x - 1][y] + 
		   mine[x - 1][y + 1] + 
		   mine[x][y - 1] + 
		   mine[x][y + 1] + 
		   mine[x + 1][y - 1] + 
		   mine[x + 1][y] + 
		   mine[x + 1][y + 1] - 8 * '0';
}
int Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int a = 0;
	if (show[x - 1][y - 1] == '*' && GetCount(mine, x - 1, y - 1) == 0 && show[x - 1][y - 1] < '0' && x - 1 != 0 && y - 1 != 0 && x - 1 != ROWS && y - 1 != COLS)
		show[x - 1][y - 1] = '0', a++;
	if (show[x - 1][y] == '*' && GetCount(mine, x - 1, y) == 0 && show[x - 1][y] < '0' && x - 1 != 0 && y != 0 && x - 1 != ROWS && y != COLS)
		show[x - 1][y] = '0', a++;
	if (show[x - 1][y + 1] == '*' && GetCount(mine, x - 1, y + 1) == 0 && show[x - 1][y + 1] < '0' && x - 1 != 0 && y + 1 != 0 && x - 1 != ROWS && y + 1 != COLS)
		show[x - 1][y + 1] = '0', a++;
	if (show[x][y + 1] == '*' && GetCount(mine, x, y + 1) == 0 && show[x][y + 1] < '0' && x != 0 && y + 1 != 0 && x != ROWS && y + 1 != COLS)
		show[x][y + 1] = '0', a++;
	if (show[x][y - 1] == '*' && GetCount(mine, x, y - 1) == 0 && show[x][y - 1] < '0' && x != 0 && y - 1 != 0 && x != ROWS && y - 1 != COLS)
		show[x][y - 1] = '0', a++;
	if (show[x + 1][y + 1] == '*' && GetCount(mine, x + 1, y + 1) == 0 && show[x + 1][y + 1] < '0' && x + 1 != 0 && y + 1 != 0 && x + 1 != ROWS && y + 1 != COLS)
		show[x + 1][y + 1] = '0', a++;
	if (show[x + 1][y] == '*' && GetCount(mine, x + 1, y) == 0 && show[x + 1][y] < '0' && x + 1 != 0 && y != 0 && x + 1 != ROWS && y != COLS)
		show[x + 1][y] = '0', a++;
	if (show[x + 1][y - 1] == '*' && GetCount(mine, x + 1, y - 1) == 0 && show[x + 1][y - 1] < '0' && x + 1 != 0 && y - 1 != 0 && x + 1 != ROWS && y - 1 != COLS)
		show[x + 1][y - 1] = '0', a++;
	system("cls");
	DisplayBoard(show, ROW, COL);
	return a;
}
