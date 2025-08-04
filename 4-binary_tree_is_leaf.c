#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_delete - deletes an entire binary tree
*
* @tree: pointer to the root node of the tree to delete.
* Return: nothing.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
