#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 정수를 입력 후, 정수 개수만큼 단어들을 입력받은 후 저장하는 연결 리스트 */

typedef struct { //구조체 정의
	char name[100];
}element;

typedef struct ListNode { //노드 정의
	element data;
	struct ListNode *link;
}ListNode;

ListNode* insert_first(ListNode *head, element value) { //삽입 연산
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head; //헤드 포인터 값을 복사
	head = p; //헤드 포인터 변경

	return head; //헤드 포인터 반환
}

void print_list(ListNode *head) { //출력
	for (ListNode *p = head; p != NULL; p = p->link) {
		printf("%s->", p->data.name);
	}
	printf("NULL \n");
}

int main() {
	ListNode *head = NULL;
	element data;
	int N,i;
	char temp[100] = { NULL };

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%s", temp);
		getchar();

		strcpy(data.name, temp);
		head = insert_first(head, data);
		print_list(head);
	}

	
	return 0;
}
