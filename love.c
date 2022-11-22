#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	int i;
//	double t, num, sum = 0;
//	double a = 1, b = 2;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		num = b / a;
//		sum = sum + num;
//		t = b;
//		b = a + b;
//		a = t;
//	}
//	printf("%.2f", sum);
//	return 0;
//}
#include <stdio.h>
int main()
{
	char* c[] = { "I","TO","MENU","AGE","APPROVAL","TV" };
	char** pc[] = { c + 5,c + 4,c + 3,c + 2,c + 1,c };
	char*** pcc = pc;
	printf("%s", **(++pcc + 4));
	printf(" %s", **pcc + 7);
	printf("%s", *pcc[3] + 1);
	printf("%s", pcc[-1][0] + 0x1);
	printf("%s", **++pcc + 2);
	printf("%2s", **(pcc + 1) + 3);
}