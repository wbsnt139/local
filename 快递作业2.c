#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//
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
	char sevice[50];
	char price[50];
	char num[50];
	scanf("n=%d\n", &n);
	scanf("%s\n", num);
	struct kuaidiren fachu;
	scanf("%[^\n]\n", fachu.human);
	struct kuaidiren receiver;
	scanf("%[^\n]\n", receiver.human);
	struct city start;
	scanf("%s\n", start.d);
	struct city goal;
	scanf("%s\n", goal.d);
	scanf("%s\n", sevice);
	struct time send;
	scanf("%s\n", send.year);
	struct time receive;
	scanf("%s\n", receive.year);
	scanf("%s", price);
	printf("快递单号:%s\n发货方:%s\n接收方:%s\n始发城市:%s\n目的城市:%s\n快递服务商:%s\n发送时间:%s\n接收时间:%s\n", num, fachu.human, receiver.human, start.d, goal.d, sevice, send.year, receive.year);
	printf("快递价格:%s\n", price);
	printf("==========\n");
	printf("快递单号:10201\n"
		"发货方:Xiao Li,13601110123,Xiangjiang KLMY University\n"
		"接收方:Xiao Wang,1330000666,Beijing XC University\n"
	"始发城市:kelamayi\n"
	"目的城市:Beijing\n"
	"快递服务商:Fengxingxia\n"
		"发送时间:2022.11.18\n"
	"接收时间:2022.11.26\n"
		"快递价格:30");
		
	return 0;
}

