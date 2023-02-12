#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SeqListPushBack(&sl, 10);
	SeqListPushBack(&sl, 20);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);
	SeqListPushFront(&sl, 40);
	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList3()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListInsert(&sl, 2, 30);
	SeqListPrint(&sl);

	int pos = SeqListFind(&sl, 4);
	if (pos != -1)
	{
		SeqListInsert(&sl, pos, 40);
	}
	SeqListPrint(&sl);

	SeqListInsert(&sl, 0, -1);
	SeqListPrint(&sl);

	SeqListInsert(&sl, 8, 80);
	SeqListPrint(&sl);
	SeqListDestory(&sl);
}

void TestSeqList4()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListPushFront(&sl, 1);
	SeqListPushFront(&sl, 2);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 4);
	SeqListPushFront(&sl, 5);
	SeqListPrint(&sl);

	SeqListErase(&sl, 1);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	int pos = SeqListFind(&sl, 3);
	if (pos != -1)
	{
		SeqListErase(&sl, pos);
	}
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

// дһ������ͨѶ¼�Ĳ˵�
void Menu()
{
	printf("************************************\n");
	printf("��ѡ����Ĳ���:>\n");
	printf("1��ͷ��  2��ͷɾ\n");
	printf("3��β��  4��βɾ\n");
	printf("5����ӡ  -1���˳�\n");

	printf("************************************\n");
}

// ���鲻Ҫһ������д�˵��������д��Ԫ����
// ����ѳ������ӿڲ���û���⣬��д�˵����˵����������
void MenuTest()
{
	SL sl;
	SeqListInit(&sl);
	int input = 0;
	int x;
	while (input != -1)
	{
		Menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ҫͷ������ݣ���-1������");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqListPushFront(&sl, x);
				scanf("%d", &x);
			}
			break;
		case 2:
			SeqListPopFront(&sl);
			break;
		case 3:
			printf("��������Ҫβ������ݣ���-1������");
			scanf("%d", &x);
			while (x != -1)
			{
				SeqListPushBack(&sl, x);
				scanf("%d", &x);
			}
			break;
		case 4:
			SeqListPopBack(&sl);
			break;
		case 5:
			SeqListPrint(&sl);
			break;
		case 6:
			break;
		default:
			printf("�޴�ѡ��,����������\n");
			break;
		}
	}

	SeqListDestory(&sl);
}

//int main()
//{
//	//TestSeqList1();
//	//TestSeqList2();
//	//TestSeqList4();
//	MenuTest();
//
//	return 0;
//}
//

// ȥ��
//int removeDuplicates(int* nums, int numsSize){
//	if (numsSize == 0)
//		return 0;
//
//	int i = 0, j = 1;
//	int dst = 0;
//	while (j < numsSize)
//	{
//		if (nums[i] == nums[j])
//		{
//			++j;
//		}
//		else
//		{
//			nums[dst] = nums[i];
//			++dst;
//			i = j;
//			++j;
//		}
//	}
//
//	//nums[dst] = nums[i];
//	//++dst;
//
//	return dst;
//}
//
//int main()
//{
//	int a[3] = { 1, 1, 2 };
//	removeDuplicates(a, 3);
//
//	return 0;
//}

int main()
{
	int* p1 = malloc(sizeof(int) * 10);
	int* p2 = realloc(p1, sizeof(int) * 2000);

	return 0;
}

