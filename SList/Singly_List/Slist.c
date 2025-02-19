#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"


void SLTPrint(SLTNode* phead) 
{
	SLTNode* pcur = phead;//用于接收形参
	if (pcur==NULL)
	{
		printf("单链表为空，无法打印\n");

	}
	else
	{
		while (pcur)
			{
				printf("%d->", pcur->data);
				pcur = pcur->next;
			}
			printf("NULL\n");
	}
	
}

SLTNode* SLTBuy(SLDatatType x)
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newNode==NULL)
	{
		printf("申请空间失败\n");
	}
	else
	{
		newNode->data = x;
		newNode->next = NULL;
	}
	return newNode;
}

void insertTail(SLTNode** pphead, SLDatatType x)//形参要影响实参，必须传递地址,使用双指针
{
	//创建新节点
	SLTNode* newNode = SLTBuy(x);

	//如果链表是空的，直接插入
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	//如果链表不是空的，则需要找到尾节点，用while语句实现
	else
	{
		SLTNode* ptail = *pphead;
		while (ptail->next)//如果当前指向的节点指向的节点是空的，那么这个节点就是尾节点
		{
			ptail = ptail->next;
		}
		ptail->next = newNode;
	}
}

void insertHead(SLTNode** pplist, SLDatatType x)
{
	SLTNode* newNode = SLTBuy(x);
	//先将新节点的尾巴接上，再接头，顺序不能相反
	newNode->next = *pplist;
	(*pplist) = newNode;

}
