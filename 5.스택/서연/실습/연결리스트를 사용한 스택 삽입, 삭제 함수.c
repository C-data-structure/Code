#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack { //연결리스트 노드 구조체
	char data; 
	struct stack* link;
}stack;

stack* top; //스택의 맨 위의 노드 주소를 저장할 포인터

int isEmpty() { //스택이 공백 상태인지 검사하는 함수
	if (top == NULL) { //top이 아무것도 가리키지 않으면
		printf("Error");
		return 1;
	}
	return 0;
}

void push(data) { //스택에 노드를 삽입하는 함수
	stack* newnode = (stack *)malloc(sizeof(stack));
	newnode->data = data;
	newnode->link = top; //link에 맨 위의 노드 주소 저장
	top = newnode; //newnode가 맨 위의 노드가 됨, top에 newnode주소 저장
}

char pop() { //스택에 노드를 제거하는 함수
	if (!isEmpty()) { //배열이 비어있지 않으면
		stack* temp = top; //temp포인터 변수 선언해 맨 위 노드의 주소값 저장
		char data = temp->data; //data변수 새로 선언해 맨 위 노드 데이터 저장
		top = temp->link; //top포인터에 2번째 노드 주소값 저장
		free(temp); //맨 위 노드 제거

		return data;
	}
}