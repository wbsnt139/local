#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//递归函数求解
int Fib(int n)//定义函数
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}



int main()//函数要显示什么
{
	int n = 0;
	int ret = 0;
		scanf("%d", &n);

		ret = Fib(n);
		printf("ret=%d", ret);

	return 0;
}