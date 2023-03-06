#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
void SLTPrint(SLTNode* phead);
void SLTPushBack(SLTNode** phead, SLTDataType x);
void SLTPushFront(SLTNode** phead, SLTDataType x);
void SLTPopBacak(SLTNode** phead);
void SLTPopFront(SLTNode** pphead);