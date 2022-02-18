#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
}Tree;

int size(Tree *root) {
	int left_size, right_size;

	if (root == NULL)
		return 0;

	left_size = size(root->left);
	right_size = size(root->right);

	return (root->data + left_size + right_size);
}