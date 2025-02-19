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
        newHead = newTail = NULL;//创建空链表

        while (pcur)//遍历原来的指针
        {
            //找到新的数据进行尾插的操作
            if (pcur->val != val)
            {
                if (newHead == NULL)//如果新的链表为空，将第一个不为空的节点连接起来，第一次一定为空
                {
                    newHead = newTail = pcur;
                }
                else {//新链表不为空，进行尾插
                    newTail->next = pcur;
                    newTail = newTail->next;
                }
            }
            pcur = pcur->next;//遍历
            if (newTail != NULL)
            {
                newTail->next = NULL;

            }
        }
        return newHead;
    }

