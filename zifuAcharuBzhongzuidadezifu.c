#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    char a[N], max;
    char b[] = { "ab" };
    int i = 0, index = 0, len, len1;
    gets(a);
    /*scanf("%s", a);*/
    len1 = strlen(a);
    len = strlen(b);
    max = a[0];
    for (i = 1; i < len1; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;  //�ҵ�����ַ���λ��
        }
    }
    for (int j = len1 + len - 1; j > index; j--)
        a[j] = a[j - len];      //������ٸ��ַ��������ƶ����ٸ��ַ�
    for (int k = 0; k < len; k++)
        a[++index] = b[k];  //��b�ַ�������a��
    for (i = 0; i < len1 + len; i++)
        printf("%c", a[i]);
    return 0;
}