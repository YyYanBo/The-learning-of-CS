#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"

void SListTest01()
{
	//SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	//node1->data= 1;

	//SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	//node2->data = 2;

	//SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
	//node3->data = 3;

	////���ٿռ䲢�Ҵ洢����������

	//node1->next = node2;
	//node2->next = node3;
	//node3->next = NULL;
	//���������ڵ㹹�ɵ�����

	//��װ��������ΪSLTNode* SLTBuy(SLTDatatype x);��������ڵ�
	SLTNode* node1 = SLTBuy(1);
	SLTNode* node2 = SLTBuy(4);
	SLTNode* node3 = SLTBuy(5);
	node1->next = node2;
	node2->next = node3;

	//��ӡ���������
	SLTNode* plist;//����plistָ�뷽���ӡ�������´�ֻ���޸�plist�Ϳɶ�����Ҫ�޸Ĵ�ӡ�����е�����
	plist = node1;
	SLTPrint(plist);
}

void SListTest02()
{
	SLTNode* node1 = SLTBuy(1);
	SLTNode* node2 = SLTBuy(4);
	SLTNode* node3 = SLTBuy(5);
	node1->next = node2;
	node2->next = node3;

	//��ӡ���������
	SLTNode* plist;//����plistָ�뷽���ӡ�������´�ֻ���޸�plist�Ϳɶ�����Ҫ�޸Ĵ�ӡ�����е�����
	plist = node1;
	SLTPrint(plist);

	insertTail(&plist, 88);
	SLTPrint(plist);

	insertPos(&plist, node2, 999);
	SLTPrint(plist);



	insertHead(&plist, 8);
	SLTPrint(plist);

	Find(plist, 88);

	deleteTail(&plist);
	SLTPrint(plist);

	Find(plist, 88);

}


int main()
{
	SListTest02();
	return 0;
}