#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to traverse.
* Return: height of tree (count).
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
