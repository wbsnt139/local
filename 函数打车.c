#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Dache(int s, int n)
{
	printf("");
}
int main()
{
	float s, m, n;
	scanf("%f", &s);
	m = s - 3;
	if (s == 0)
		return 0;
	else {
		if (s <= 3)
			printf("路程=%.1f公里,价钱=8元", s);
		else {
			n = (int)m * 1.8 + 8, m = m - (int)m;
			if (m == 0)
				printf("路程=%.1f公里,价钱=%.1f元", s, n);
			else if ((m < 0.5 && m>0) == 1)
			{
				n += 0.9;
				printf("路程=%.1f公里,价钱=%.1f元", s, n);
			}
			else
			{
				n += 1.8;
				printf("路程=%.1f公里,价钱=%.1f元", s, n);
			}
		}
		return 0;
	}
}
