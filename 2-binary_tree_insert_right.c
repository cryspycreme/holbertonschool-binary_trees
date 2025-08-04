#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the tight-child of another node
*
* @parent: pointer to the node where the right child is inserted.
* @value: the value to input into the node
* Return: pointer to new node, or NULL on failure.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL) /*CHECK 1: check this first*/
		return (NULL);

	/*if parent == NULL, return null*/
	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node; /*Update old right child's parent*/
	}
	parent->right = new_node;

	return (new_node);
}
