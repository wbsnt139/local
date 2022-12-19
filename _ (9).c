#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a[51]={ 1 2 3 4 5 6 6 8 9 10 }；
//	int i，j, m;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		/*scanf("%d", &a[i]);*/
//	scanf("%d", &m);
//	i = 0;
//	for (i = 0; i < n; i++) {
//		if (a[i] < m) {
//			printf("%d ", a[i]);
//		}
//		else {
//			printf("%d ", m);
//			break;
//		}
//	}
//	
//	return 0;
//}

int main()
{
    int i ;
      int n = 9;
        int num[]={ 1,2,4,5,6,6,8,9,10};
    int t, count = 1;
   
    scanf("%d", &t);
    for (i = 0; i < n; i++)//插在序列最前面或中间部分
    {
        if (num[i] > t && count == 1)
        {
            printf("%d ", t);
            count = 0;
        }
        printf("%d ", num[i]);
    }
    if (count == 1) printf("%d ", t);//插在最后
    return 0;
}

