#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
double f(double x)
{
    return (x * x * x - 3 * x * x + 3 * x - 1);
}
int main()
{
    double x1, x2, xx;//x1,x2�����������ұ߽磬xx�����̸���ֵ
    do
    {
        scanf("%lf%lf", &x1, &x2);
    } while (f(x1) * f(x2) > 0);//��֤f(x1)��f(x2)����ţ������ſ��Խ�����һ���ľ�׼���䣬������������x1��x2��ֵ
    do
    {
        xx = (x1 + x2) / 2;
        if (f(xx) * f(x1) > 0)
            x1 = xx;
        else
            x2 = xx;
    } while (fabs(f(xx)) >= 1e-7);//le-6����1*10��-6�η�������ֵ��Ӱ�쵽����׼ȷ�ȵ�����
    printf("%.2lf\n", xx);
    return 0;
}