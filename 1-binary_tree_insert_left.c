#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
*
* @parent: pointer to the node where the left child is inserted.
* @value: the value to input into the node
* Return: pointer to new node, or NULL on failure.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);
	
	/*if parent == NULL, set new node = parent*/
	if (parent == NULL)
                return (NULL);

	if (new_node == NULL)
		return (NULL);
	
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node; /*Update old left child's parent*/
	}
	parent->left = new_node;
	
	return (new_node);
}
