#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fun(int k)
{
	if (k > 0)
	{
		fun(k - 1);
	}
	printf(" %d,", k);
}
//Ϊ����0�����1 2 3��
int main()
{
	int w = 3;
	fun(w);
	printf("\n");
}