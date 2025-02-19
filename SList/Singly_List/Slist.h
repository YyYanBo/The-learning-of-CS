#pragma once
#include<stdio.h>
#include<stdlib.h>//引用库用于动态内存申请
#include<assert.h>

typedef int SLDatatType ;//改变单链表中的数据类型

//单个节点的结构
typedef struct SListNode
{
	SLDatatType data;//数据域
	struct SListNode* next;//指向下一个节点
}SLTNode;

//打印单链表信息
void SLTPrint(SLTNode* phead);
//申请节点
SLTNode* SLTBuy(SLDatatType x);

//单链表的尾插法
void insertTail(SLTNode** phead, SLDatatType x);

//单链表的头插法
void insertHead(SLTNode** pplist, SLDatatType x);

//指定位置的插入

//指定位置的删除

//

