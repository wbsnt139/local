#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CountBitOne(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = CountBitOne(a);
	printf("%d", count);
	

}