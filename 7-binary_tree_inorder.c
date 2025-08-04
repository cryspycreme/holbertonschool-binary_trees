#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_inorder - goes through a binary tree using in-order traversal
*
* @tree: a pointer to the root node of the tree to traverse.
* @func: pointer a function to call for each node.
* Return: nothing.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
	binary_tree_inorder(tree->left, func); /*recur on left node*/
	func(tree->n); /*Deal with the current node*/
	binary_tree_inorder(tree->right, func); /*recur on the right node*/
}
