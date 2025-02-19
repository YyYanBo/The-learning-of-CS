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

void deleteTail(SLTNode** pphead)
{
	SLTNode* pcur = *pphead;
	SLTNode* prev = NULL;
	//如果链表为空，直接进行断言判断
	assert(pphead && *pphead);
	//链表不为空
	//只有一个节点
	if (pcur->next == NULL)
	{
		pcur = NULL;//解引用双指针让头指针指向空
		return;
	}
	else//当有多个节点的时候，完成尾删的操作
	{
		//尾部删除的时候我们需要保存倒数第二个节点
		while (pcur->next != NULL)//遍历单链表找到倒数第二个节点
		{
			prev = pcur;
			pcur = pcur->next;
		}
		prev->next = NULL;
	}
	return;
}

void Find(SLTNode* phead, SLDatatType x)
{
	SLTNode* pcur = phead;
	int number = 0;
	while (pcur)//遍历单链表
	{
		if (pcur->data == x)
		{
			number++;
		}
		pcur = pcur->next;
	}
	if (number == 0)
	{
		printf("不存在存储该数据的节点！！\n");
	}
	else
	{
		printf("有%d个这样的节点\n",number);

	}
}

void insertPos(SLTNode** pphead, SLTNode* pos, SLDatatType x)
{
	SLTNode* pcur = *pphead;
	//需要第二个指针prev指向指定位置之前方便插入
	SLTNode* prev=NULL;
	while (pcur != pos)//遍历单链表直到到达指定的位置
	{
		prev = pcur;
		pcur = pcur->next;
	}
	//跳出循环的时候，pcur指向pos,prev指向pos前的位置

	SLTNode* destination = SLTBuy(x);
	prev->next = destination;
	destination->next = pcur;
}

