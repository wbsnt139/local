#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	float a, b, c, s, p;
//	scanf("a=%f,b=%f,c=%f", &a, &b, &c);
//	if (a == 0 || b == 0 || c == 0)
//		return 0;
//	else
//	{
//		if ((a < b + c && b < a + c && c < a + b))
//			p = (a + b + c) / 2, s = sqrt(p * (p - a) * (p - b) * (p - c)), printf("a=%.2f,b=%.2f,c=%.2f,s=%.2f", a, b, c, s);
//		else
//			printf("三条边不能构成三角形!");
//		return 0;
//	}
//}
int main()
{
	float *pa,a, *pb,b,*pc, c, s, p;
	pa = &a, pb = &b, pc = &c;
	scanf("a=%f,b=%f,c=%f", pa,pb, pc);
	if (a == 0 || b == 0 || c == 0)
		return 0;
	else
	{
		if ((a < b + c && b < a + c && c < a + b))
			p = (a + b + c) / 2, s = sqrt(p * (p - a) * (p - b) * (p - c)), printf("a=%.2f,b=%.2f,c=%.2f,s=%.2f", a, b, c, s);
		else
			printf("三条边不能构成三角形!");
		return 0;
	}
}