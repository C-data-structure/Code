#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;

typedef struct ListNode {
	element data;
	struct ListNode *link;
}ListNode;

ListNode* delete(ListNode *head, ListNode *pre){
    ListNode *removed;
    removed=pre->link;
    pre->link=removed->link;

    free(removed);

    return head;
}