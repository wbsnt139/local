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
    double x1, x2, xx;//x1,x2代表区间左右边界，xx代表方程跟的值
    do
    {
        scanf("%lf%lf", &x1, &x2);
    } while (f(x1) * f(x2) > 0);//保证f(x1)和f(x2)是异号，这样才可以进行下一步的精准区间，否则，重新输入x1，x2的值
    do
    {
        xx = (x1 + x2) / 2;
        if (f(xx) * f(x1) > 0)
            x1 = xx;
        else
            x2 = xx;
    } while (fabs(f(xx)) >= 1e-7);//le-6代表1*10的-6次方，它的值将影响到跟的准确度的问题
    printf("%.2lf\n", xx);
    return 0;
}