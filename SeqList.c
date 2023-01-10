#include "SeqList.h"

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	// ���û�пռ���߿ռ䲻�㣬��ô���Ǿ�����
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	/*SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;*/
	SeqListInsert(ps, ps->size, x);
}

void SeqListPopBack(SL* ps)
{
	// ���ᴦ��ʽ
	//if (ps->size > 0)
	//{
	//	//ps->a[ps->size - 1] = 0;
	//	ps->size--;
	//}

	// ��������ʽ
	/*assert(ps->size > 0);
	ps->size--;*/

	SeqListErase(ps, ps->size-1);
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	//SeqListCheckCapacity(ps);

	//// Ų������
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}
	//ps->a[0] = x;
	//ps->size++;

	SeqListInsert(ps, 0, x);
}

void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);

	// Ų������
	//int begin = 0;
	//while (begin < ps->size-1)
	//{
	//	ps->a[begin] = ps->a[begin+1];
	//	++ begin;
	//}

	//int begin = 1;
	//while (begin < ps->size)
	//{
	//	ps->a[begin-1] = ps->a[begin];
	//	++begin;
	//}

	//ps->size--;

	SeqListErase(ps, 0);
}

int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}

// ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	// ����Ĵ���ʽ
	/*if (pos > ps->size || pos < 0)
	{
		printf("pos invalid\n");
		return;
	}*/
	// �ֱ��ķ�ʽ
	assert(pos >= 0 && pos <= ps->size);

	SeqListCheckCapacity(ps);

	// Ų������
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos] = x;
	ps->size++;
}

// ɾ��posλ�õ�����
void SeqListErase(SL* ps, int pos)
{
	assert(pos >= 0 && pos < ps->size);

	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}

	ps->size--;
}