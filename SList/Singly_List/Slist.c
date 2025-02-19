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
