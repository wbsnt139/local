#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	int count = 0;
	int x;
	clock_t start, end;
	double req_time;
	srand(time(NULL));
	a = 100 + rand() % 900;
	b = 100 + rand() % 900;
	c = 100 + rand() % 900;
	printf("亲爱的小朋友%d+%d+%d等于多少？\n", a, b, c);
	start = clock();//开始计算时间了
	while (1)
	{
		scanf("%d", &x);
		if (x == a + b + c)
		{
			count++;
			break;
		}
		printf("\a答错了，这都能错？快点重算！\n");
		count++;
	}
	end = clock();//计算结束了
	req_time = (double)(end - start)/CLOCKS_PER_SEC;
	printf("共计算%d次\n",count);

	printf("用时%.1f秒\n", req_time);
	if (req_time > 30.0)
	{
		printf("\a你太慢了，我奶奶都比你厉害\n");
	}
	else if (req_time > 17.0)
	{
		printf("算的很快啊，你这不得酒吧舞啊\n");
	}
	else
		printf("这么快，你是不是开挂了？\n");
	system("pause");
	
}