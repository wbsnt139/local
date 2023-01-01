//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    float h, w, BMI;
//    scanf("%f %f",&h,&w);
//    BMI = w / h / h;
//    printf("身高= %.2f米，体重=%.1f公斤，体质指数=%0.2f,", h, w, BMI);
//    if (BMI > 18 && BMI < 24)
//        printf("体质情况=正常体质");
//    else
//        printf("体质情况=异常体质");
//   /* if (BMI < 14)
//        printf("太瘦");
//    else if (BMI > 14 && BMI < 18)
//        printf("偏瘦");
//    else if (BMI > 18 && BMI < 24)
//        printf("体质情况=正常体质");*/
//    /*else if（BMI > 24&&BMI<27)
//    printf("偏胖");
//        else if（BMI > 27)
//        printf("过胖");*/
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float h,w, BMI;
    scanf("%f ,%f",&h , &w);
    BMI = w / h / h;
    printf("身高=%.2f米,体重=%.1f公斤,体质指数=%0.2f,", h, w, BMI);
    if (BMI > 18 && BMI < 24)
        printf("体质情况=正常体质");
    else
        printf("体质情况=异常体质");
    /* if (BMI < 14)
         printf("太瘦");
     else if (BMI > 14 && BMI < 18)
         printf("偏瘦");
     else if (BMI > 18 && BMI < 24)
         printf("体质情况=正常体质");*/
         /*else if（BMI > 24&&BMI<27)
         printf("偏胖");
             else if（BMI > 27)
             printf("过胖");*/
    return 0;
}


