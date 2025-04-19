#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_tree - recursive helper to print the tree
 * @root: pointer to the root node
 * @indent: how far to indent branches
 * @side: whether its a left or right child
 */

void print_tree(const binary_tree_t *root, int indent, char side)
{
	int i;

	if (root == NULL)
		return;

	print_tree(root->right, indent + 4, 'R');

	for (i = 0; i < indent; i++)
		printf(" ");

	printf("%c(%03d)\n", side, root->n);

	print_tree(root->left, indent + 4, 'L');
}
/**
 * binary_tree_print - Entry point to print a whole binary tree
 * @root: pointer to the root of the tree
 */
void binary_tree_print(const binary_tree_t *tree)
{
	print_tree(tree, 0, ' ');
}
