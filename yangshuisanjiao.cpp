#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
    int a[50][50];
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)//在第一列或者在对角线上
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }
    //输出杨辉三角
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}
