#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
*
* @tree: a pointer to the root node of the tree to check.
* Return: 1 if full, 0 if not.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;
	
	if (tree == NULL)
		return (0);
	
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	
	if (left == right)
		return (1);
	else
		return (0);
}
