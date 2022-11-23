#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int f(float h, float w, float BMI)
{
    BMI = w / h / h;
    printf("身高=%.2f米,体重=%.1f公斤,体质指数=%0.2f,", h, w, BMI);
    if (BMI > 18 && BMI < 24)
        printf("体质情况=正常体质");
    else if (BMI > 14 && BMI < 18)
        printf("体质情况=体质偏瘦");
    else if (BMI < 14)
        printf("体质情况 = 体质太瘦");
    else if (BMI > 24 && BMI <27)
        printf("体质情况=体质偏胖");
    else if(BMI>27)
        printf("体质情况=体质太胖");
}
int main()
{
    float h, w, BMI=0;
    scanf("%f ,%f", &h, &w);
    f(h, w, BMI);

    return 0;
}





