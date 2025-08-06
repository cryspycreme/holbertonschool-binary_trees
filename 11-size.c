#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
*
* @tree: a pointer to the target node. 
* Return: size of tree (count).
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	
	if (tree == NULL)
		return (0);
	
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 2);
}
