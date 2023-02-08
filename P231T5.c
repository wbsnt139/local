#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void fun(int k)
//{
//	if (k > 0)
//	{
//		fun(k - 1);
//	}
//	printf(" %d,", k);
//}
////为何有0，后的1 2 3？
//int main()
//{
//	int w = 3;
//	fun(w);
//	printf("\n");
//}
double fun(int a, int b, int c)
{
	double s;
	s = a / b * c;
	return s;
}
int main()
{
	int a = 18, b = 4, c = 6;
	double d;
	d = fun(a, b, c);
	printf("%4.1lf", d);
}