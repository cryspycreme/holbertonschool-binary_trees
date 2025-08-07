#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_uncle - measures the height of a binary tree
*
* @node: a pointer to the node to find the uncle
* Return: pointer to uncle node.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	
	if (node->parent == node->parent->parent->left && node->parent->parent->right != NULL)
		return (node->parent->parent->right);
	else if (node->parent == node->parent->parent->right && node->parent->parent->left != NULL)
		return (node->parent->parent->left);
	else
		return (NULL);
}
