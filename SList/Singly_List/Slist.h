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
void insertTail(SLTNode** pphead, SLDatatType x);

//�������ͷ�巨
void insertHead(SLTNode** pphead, SLDatatType x);

//ָ��λ�õĲ���
void insertPos(SLTNode** pphead,SLTNode* pos,SLDatatType x);

//β��ɾ��
void deleteTail(SLTNode** pphead);

//ָ��λ�õ�ɾ��

//����ָ������
//���ڲ��漰����ԭ����������޸�
//ֻ�ô���һ��ָ�뼴��
void Find(SLTNode* phead, SLDatatType x);

