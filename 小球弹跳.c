#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdio.h>
//
//int main()
//{
//    float h = 10; 
//    int n = 0;
//    scanf("h=%f,n=%d", &h,&n);
//    h = h / 2; 
//    for (int i = 2; i <= n; i++)
//    {
//        n = n + 2 * h; 
//        h = h / 2;
//    }
//    printf("%f", h);
//    return 0;
//}

//float myHeight(float height, int n)
//{
//	while (n)
//	{
//		n--;
//		height /= 2;
//	}
//	return height;
//}
float myHeight(float height, int n)
{
	if (n)
		return myHeight(height /= 2, --n);
	else
		return height;
}
int main()
{
	float h;
	int n;
	scanf("h=%f,n=%d", &h, &n);
	printf("%.3f", myHeight(h, n));
	return 0;
}