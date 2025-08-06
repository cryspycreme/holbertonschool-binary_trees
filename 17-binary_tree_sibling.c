#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_sibling - measures the height of a binary tree
*
* @node: a pointer to the node to find the sibling.
* Return: pointer to sibling node.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node == node->parent->left) && (node->parent->right != NULL))
		return (node->parent->right);
	else if ((node == node->parent->right) && (node->parent->left != NULL))
		return (node->parent->left);
	else
		return (NULL);
}
