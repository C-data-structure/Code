#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
}Tree;

int nodecount(Tree *node) {
	int count = 0;

	if (node != NULL) {
		count = 1 + nodecount(node->left) + nodecount(node->right);
	}

	return count;
}