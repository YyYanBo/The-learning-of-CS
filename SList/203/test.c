#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
 struct ListNode {
      int val;
      struct ListNode *next;
};

typedef struct ListNode ListNode;
 

    struct ListNode* removeElements(struct ListNode* head, int val) {
        ListNode* pcur = head;
        ListNode* newHead, * newTail;
        newHead = newTail = NULL;//����������

        while (pcur)//����ԭ����ָ��
        {
            //�ҵ��µ����ݽ���β��Ĳ���
            if (pcur->val != val)
            {
                if (newHead == NULL)//����µ�����Ϊ�գ�����һ����Ϊ�յĽڵ�������������һ��һ��Ϊ��
                {
                    newHead = newTail = pcur;
                }
                else {//������Ϊ�գ�����β��
                    newTail->next = pcur;
                    newTail = newTail->next;
                }
            }
            pcur = pcur->next;//����
            if (newTail != NULL)
            {
                newTail->next = NULL;

            }
        }
        return newHead;
    }

