#include"slist.h"
void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SLTPushBack(SLTNode** phead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		SLTNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SLTPushFront(SLTNode** phead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *phead;
	*phead = newnode;
}
void SLTPopBacak(SLTNode** phead)
{
	assert(*phead);
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SLTNode* preval = NULL;
		SLTNode* tail = *phead;
		while (tail->next != NULL)
		{
			preval = tail;
			tail = tail->next;
		}
		free(tail);
		tail->next = NULL;
	}
}
void SLTPopFront(SLTNode** phead)
{
	// 暴力检查
	assert(*phead);

	// 温柔的检查
	//if (*phead == NULL)
	//	return;

	SLTNode* first = *phead;
	*phead = first->next;
	free(first);
	first = NULL;
}
