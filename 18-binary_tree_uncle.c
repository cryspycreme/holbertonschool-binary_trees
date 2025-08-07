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
	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = node->parent->parent;

	if (node == NULL || parent == NULL || grandparent == NULL)
		return (NULL);

	if (parent == grandparent->left && grandparent->right != NULL)
		return (grandparent->right);
	else if (parent == grandparent->right && grandparent->left != NULL)
		return (grandparent->left);
	else
		return (NULL);
}
