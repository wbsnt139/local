#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
	time_t current = time(NULL);
	printf("��ǰ���ں�ʱ��:%s", asctime(localtime(&current)));
	
}