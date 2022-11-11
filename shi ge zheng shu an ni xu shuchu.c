#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[10];
	int i, m, n;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	i--;			
	for (i; i > -1; i--) {
		printf("%d ", a[i]);
	}
	return 0;
}
