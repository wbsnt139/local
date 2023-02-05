#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void menu()
{
	printf("*******************************************************************************\n");
	printf("***********   欢迎来到猜数字游戏!请在1~100之间猜出正确的数字   ****************\n");
	printf("*******************************************************************************\n");
	printf("***********                     请选择一项！                   ****************\n");
	printf("*******************************************************************************\n");
	printf("***********                1.开始    |    0.退出               ****************\n");
	printf("*******************************************************************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	//生成随机数
	while (1)
	{
		static int i = 0;
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess > 100 || guess < 1)
		{
			printf("不要乱猜哦");
			continue;
		}
		else if (guess > ret)
			i++,printf("您猜的数字太大了!");
		else if (ret > guess)
			i++,printf("您猜的数字太小了!");
		else
		{
			i++;
			system("cls");
			printf("*******************************************************************************\n");
			printf("********                     ! 恭喜你  猜对了!                      ***********\n");
			printf("********                  !本次猜数字游戏的答案是%d!                ***********\n",ret);
			printf("*******************************************************************************\n");
			if(i<=3)
			printf("********   您仅仅使用%d次就猜出了正确答案，您是不是开挂了？！0_0 !  ***********\n", i);
			else if(i>3&&i<7)
			printf("********     您使用%d次就猜出了正确答案，您真的是太聪明了！^_^ !    ***********\n", i);
			else if(i>=7&&i<15)
			printf("********                  !您猜出正确答案使用了%d次!                ***********\n", i);
			else
			printf("*****     您使用了%d次才猜出正确答案，您真是太笨了!我奶奶都比你厉害     *******\n", i);
			printf("*******************************************************************************\n");
			printf("**********************     ...请按回车键继续...    ****************************\n");
			getchar();
			getchar();
			system("cls");
			break;
		}
	}
	//猜数字
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请输入对应的数字>:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误！\n");
				break;
		}
	} while (input);
	return 0;
}
