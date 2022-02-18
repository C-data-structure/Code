#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TreeNode { //노드 생성
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
}Tree;

int size(Tree *node) { //루트노드 삽입 함수
	if (node == NULL)
		return 0;

	//왼쪽 자식이 NULL일때
	if (node->left == NULL && node->right != NULL) { 
		printf("%d %d", node->data, node->right->data);
		printf("\n");
	}
	//우측 자식이 NULL일때
	else if (node->left != NULL && node->right == NULL) { 
		printf("%d %d", node->data, node->left->data);
		printf("\n");
	}

	//왼쪽, 우측 자식이 모두 값을 가질때
	else if (node->left != NULL && node->right != NULL) { 
		printf("%d %d %d", node->data, node->left->data, node->right->data);
		printf("\n");
	} 
	//왼쪽, 우측 자식이 NULL일때
	else if (node->left == NULL && node->right == NULL) { 
		printf("%d", node->data);
		printf("\n");
	}

	//return -1;
}

int main() {
	//단일 노드 생성 후, 부모노드를 붙여가는 방식으로 트리 구성
	Tree F8 = { 80,NULL,NULL };
	Tree F7 = { 130,NULL,NULL };
	Tree F6 = { 120,&F7,&F8 };
	Tree F5 = { 90,NULL,NULL };
	Tree F4 = { 70,NULL,NULL };
	Tree F3 = { 50,NULL,&F6 };
	Tree F2 = { 30,&F4,&F5 };
	Tree F1 = { 0,&F2,&F3 };

	int n;
	scanf("%d", &n); //노드 번호 입력받음

	//노드 번호가 1부터 8일때 함수 호출
	if (n == 1)
		size(&F1);
	else if (n == 2)
		size(&F2);
	else if (n == 3)
		size(&F3);
	else if (n == 4)
		size(&F4);
	else if (n == 5)
		size(&F5);
	else if (n == 6)
		size(&F6);
	else if (n == 7)
		size(&F7);
	else if (n == 8)
		size(&F8);
	//노드 번호가 그 외의 번호일 경우 -1출력
	else
		printf("-1");

}