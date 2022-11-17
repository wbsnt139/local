#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//typedef struct Stu
//{
//	char a[20];
//	char b[50];
//	char c[20];
//	char d[20];
//	char e[20];
//	char f[20];
//	char g[20];
//	char h[20];
//	char i[20];
//	
//}Stu;
//int main()
//{
//	char a[30];
//	gets(a);
//	
//	
//	printf("%s\n", a);
//	
//	
//	return 0;;
//}
struct kuaidiren
{
	char human[50];
};
struct city
{
	char d[50];
};
struct time
{
	char year[50];
};
int main()
{
	int n = 0;
		scanf("%d\n", &n);
		scanf("快递单号:%[^\n]\n", num);
		struct kuaidiren fachu;
		scanf("发货方:%[^\n]\n", fachu.human);
		struct kuaidiren receiver;
		scanf("接收方:%[^\n]\n", receiver.human);
		struct city start;
		scanf("始发城市:%[^\n]\n", start.d);
		struct city goal;
		scanf("目的城市:%[^\n]\n", goal.d);
		scanf("快递服务商:%[^\n]\n", sevice);
		struct time send;
		scanf("发送时间:%[^\n]\n", send.year);
		struct time receive;
		scanf("接收时间:%[^\n]\n", receive.year);
		scanf("快递价格:%[^\n]", price);
		if (n = 2)
		{
			
			printf("快递单号:%s\n发货方:%s\n接收方:%s\n始发城市:%s\n目的城市:%s\n快递服务商:%s\n发送时间:%s\n接收时间:%s\n", num, fachu.human, receiver.human, start.d, goal.d, sevice, send.year, receive.year);
			printf("快递价格:%s\n", price);
			printf("==========\n");
				printf("快递单号:%s\n发货方:%s\n接收方:%s\n始发城市:%s\n目的城市:%s\n快递服务商:%s\n发送时间:%s\n接收时间:%s\n", num, fachu.human, receiver.human, start.d, goal.d, sevice, send.year, receive.year);
			printf("快递价格:%s\n", price);

		}
		
	
	return 0;
}
