#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"


void SLTPrint(SLTNode* phead) 
{
	SLTNode* pcur = phead;//���ڽ����β�
	if (pcur==NULL)
	{
		printf("������Ϊ�գ��޷���ӡ\n");

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
		printf("����ռ�ʧ��\n");
	}
	else
	{
		newNode->data = x;
		newNode->next = NULL;
	}
	return newNode;
}

void insertTail(SLTNode** pphead, SLDatatType x)//�β�ҪӰ��ʵ�Σ����봫�ݵ�ַ,ʹ��˫ָ��
{
	//�����½ڵ�
	SLTNode* newNode = SLTBuy(x);

	//��������ǿյģ�ֱ�Ӳ���
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	//��������ǿյģ�����Ҫ�ҵ�β�ڵ㣬��while���ʵ��
	else
	{
		SLTNode* ptail = *pphead;
		while (ptail->next)//�����ǰָ��Ľڵ�ָ��Ľڵ��ǿյģ���ô����ڵ����β�ڵ�
		{
			ptail = ptail->next;
		}
		ptail->next = newNode;
	}
}

void insertHead(SLTNode** pplist, SLDatatType x)
{
	SLTNode* newNode = SLTBuy(x);
	//�Ƚ��½ڵ��β�ͽ��ϣ��ٽ�ͷ��˳�����෴
	newNode->next = *pplist;
	(*pplist) = newNode;

}

void deleteTail(SLTNode** pphead)
{
	SLTNode* pcur = *pphead;
	SLTNode* prev = NULL;
	//�������Ϊ�գ�ֱ�ӽ��ж����ж�
	assert(pphead && *pphead);
	//����Ϊ��
	//ֻ��һ���ڵ�
	if (pcur->next == NULL)
	{
		pcur = NULL;//������˫ָ����ͷָ��ָ���
		return;
	}
	else//���ж���ڵ��ʱ�����βɾ�Ĳ���
	{
		//β��ɾ����ʱ��������Ҫ���浹���ڶ����ڵ�
		while (pcur->next != NULL)//�����������ҵ������ڶ����ڵ�
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
	while (pcur)//����������
	{
		if (pcur->data == x)
		{
			number++;
		}
		pcur = pcur->next;
	}
	if (number == 0)
	{
		printf("�����ڴ洢�����ݵĽڵ㣡��\n");
	}
	else
	{
		printf("��%d�������Ľڵ�\n",number);

	}
}

void insertPos(SLTNode** pphead, SLTNode* pos, SLDatatType x)
{
	SLTNode* pcur = *pphead;
	//��Ҫ�ڶ���ָ��prevָ��ָ��λ��֮ǰ�������
	SLTNode* prev=NULL;
	while (pcur != pos)//����������ֱ������ָ����λ��
	{
		prev = pcur;
		pcur = pcur->next;
	}
	//����ѭ����ʱ��pcurָ��pos,prevָ��posǰ��λ��

	SLTNode* destination = SLTBuy(x);
	prev->next = destination;
	destination->next = pcur;
}

