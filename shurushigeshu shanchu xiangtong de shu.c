#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
int main()
{
    int i, j, n = N, k, t;
    int num[N];
    for (t = 0; t < 10; t++)
        scanf("%d", &num[t]);
    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)	//从num[i]的下一位开始比较，直到最后一位
            if (num[i] == num[j])	//如果数字重复
            {
                for (k = j; k < n - 1; ++k)	//从num[j]开始，所有数字前移一位
                    num[k] = num[k + 1];
                --n;              //数组长度-1
                --j;				//因为有++j，所以这里先减一下，否则num[i]比较的是移动之后的下一位，会漏掉一个数
            }
    }
    for (i = 0; i < n - 1; ++i)
        printf("%d ", num[i]);
    printf("%d", num[i]);
    return 0;
}