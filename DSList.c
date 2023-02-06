#include "SList.h"

SLTNode* BuyListNode(SLTDateType x)
{
	// 1M = 1024KB = 1024 * 1024 Byte
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuyListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		// �ҵ�β�ڵ�
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}	
}

void SListPushFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SLTNode** pphead)
{
	// �����һ��
	/*if (*pphead == NULL)
	{
	return;
	}*/

	// �ֱ�һ��
	assert(*pphead != NULL);
	
	// 1��һ���ڵ�
	// 2�����������Ͻڵ�
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//SLTNode* prev = NULL;
		//SLTNode* tail = *pphead;
		////while (tail->next != NULL)
		//while (tail->next)
		//{
		//	prev = tail;
		//	tail = tail->next;
		//}

		//free(tail);
		//tail = NULL;
		//prev->next = NULL;

		SLTNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}

void SListPopFront(SLTNode** pphead)
{
	//if (*pphead == NULL)
	//	return;
	assert(*pphead != NULL);

	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

SLTNode* SListFind(SLTNode* phead, SLTDateType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}

	return NULL;
}

// ��pos�ĺ�����룬������ʺϣ�Ҳ����
void SListInsertAfter(SLTNode* pos, SLTDateType x);

// ��posλ��֮ǰȥ����һ���ڵ�
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x)
{
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		// �ҵ�pos��ǰһ��λ��
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}

		posPrev->next = newnode;
		newnode->next = pos;
	}
}

void SListErase(SLTNode** pphead, SLTNode* pos);
void SListDestroy(SLTNode** pphead);