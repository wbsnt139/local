#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n",pc);
//
//	return 0;
//}
void menu()
{
	printf("*******************\n");
	printf("1.��2.��3.��4.��\n");
	printf("0.�˳�\n");
	printf("*******************\n");
}



int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	do {
		menu();

		printf("�����룺\n");
		scanf("%d", &input);
		printf("�������������֣�\n");
		scanf("%d%d", &x, &y);
		switch (input)
		{
		case 1:
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);


}