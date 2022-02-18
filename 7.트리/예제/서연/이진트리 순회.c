#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
}Tree;

void inorder(Tree *root) { //중위 순회(왼쪽->루트->오른쪽)
	if (root != NULL) { //루트가 NULL이 아닐경우 실행
		inorder(root->left);
		printf("%d->", root->data);
		inorder(root->right);
	}
}

void preorder(Tree *root) { //선위 순회(루트->왼쪽->오른쪽)
	if (root != NULL) { //루트가 NULL이 아닐경우 실행
		printf("%d->", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(Tree *root) { //후위 순회(왼쪽->오른쪽->루트)
	if (root != NULL) { //루트가 NULL이 아닐경우 실행
		postorder(root->left);
		postorder(root->right);
		printf("%d->", root->data);
	}
}

int main() {
	Tree *root, *n1, *n2, *n3, *n4;
	root = (Tree*)malloc(sizeof(Tree));
	n1 = (Tree*)malloc(sizeof(Tree));
	n2 = (Tree*)malloc(sizeof(Tree));
	n3 = (Tree*)malloc(sizeof(Tree));
	n4 = (Tree*)malloc(sizeof(Tree));

	root->data = 1;
	root->left = n1;
	root->right = n2;
	n1->data = 2;
	n1->left = n3;
	n1->right = n4;
	n2->data = 3;
	n2->left = n2->right = NULL;
	n3->data = 4;
	n3->left = n3->right = NULL;
	n4->data = 5;
	n4->left = n4->right = NULL;

	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
}