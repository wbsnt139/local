#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
	time_t current = time(NULL);
	printf("当前日期和时间:%s", asctime(localtime(&current)));
	
}