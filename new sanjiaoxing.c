#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int i, j, *pn,n,  *pa,a;
	pn = &n, pa = &a;
long int b=0,sum=0;
	scanf("a=%d,n=%d", pa, pn);
	
	for (i = 0; i < n; i++)
	{
		b = b+a;
		 printf("%ld", b);
		
		printf("\n");
		sum = b + sum; 
		a *= 10;
		

	}
	printf("sum=%ld", sum);
	return 0;
}