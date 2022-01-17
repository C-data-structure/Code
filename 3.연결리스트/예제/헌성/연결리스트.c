@@ -1,42 +0,0 @@
#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>

/*연결 리스트를 구현할 구조체*/
typedef struct NODE{
    int data;
    struct NODE* next;//자가 참조 구조체
    /*다음 노드의 주소를 저장할 자기참조 구조체포인터*/
}node;

int main(){
    /*노드를 메모리 동적 할당으로 생성하기*/
    node* head = (node*)malloc(sizeof(node)); //헤드 노드 생성
    head->next = NULL;
    node* node1 = (node*)malloc(sizeof(node)); //node1 이라는 새로운 노드를 새로 할당
    

    /*머리노드와 node1을 연결하기*/
    node1->next = head->next;//node1의 꼬리를 (기존)헤드의 꼬리로 연결
    node1->data = 10;//node1의 데이터 업데이드
    head->next = node1;//헤드의 꼬리를 node1으로 업데이트

    /*node1와 node2을 연결하기*/
    node* node2 = (node*)malloc(sizeof(node)); //node2 이라는 새로운 노드를 새로 할당

    node2->next = node1->next;//node1의 꼬리를 (기존)헤드의 꼬리로 연결
    node2->data = 20;//node1의 데이터 업데이드
    head->next = node2;//헤드의 꼬리를 node1으로 업데이트

    node* curr = head->next; //순회용 노드 생성
	while(curr != NULL){
		printf("%d\n", curr->data);
		curr = curr->next;
	}

    free(head);
	free(node1);
	free(node2);
	return 0;
}
