#pragma once
#include<stdio.h>
#include<stdlib.h>//���ÿ����ڶ�̬�ڴ�����
#include<assert.h>

typedef int SLDatatType ;//�ı䵥�����е���������

//�����ڵ�Ľṹ
typedef struct SListNode
{
	SLDatatType data;//������
	struct SListNode* next;//ָ����һ���ڵ�
}SLTNode;

//��ӡ��������Ϣ
void SLTPrint(SLTNode* phead);
//����ڵ�
SLTNode* SLTBuy(SLDatatType x);

//�������β�巨
void insertTail(SLTNode** phead, SLDatatType x);

//�������ͷ�巨
void insertHead(SLTNode** pplist, SLDatatType x);

//ָ��λ�õĲ���

//ָ��λ�õ�ɾ��

//

