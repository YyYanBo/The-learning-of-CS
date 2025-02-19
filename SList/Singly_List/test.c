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

	////开辟空间并且存储以上数据域

	//node1->next = node2;
	//node2->next = node3;
	//node3->next = NULL;
	//链接三个节点构成单链表

	//包装上述函数为SLTNode* SLTBuy(SLTDatatype x);用于申请节点
	SLTNode* node1 = SLTBuy(1);
	SLTNode* node2 = SLTBuy(4);
	SLTNode* node3 = SLTBuy(5);
	node1->next = node2;
	node2->next = node3;

	//打印单链表测试
	SLTNode* plist;//定义plist指针方便打印，这样下次只用修改plist就可而不必要修改打印函数中的内容
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

	//打印单链表测试
	SLTNode* plist;//定义plist指针方便打印，这样下次只用修改plist就可而不必要修改打印函数中的内容
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