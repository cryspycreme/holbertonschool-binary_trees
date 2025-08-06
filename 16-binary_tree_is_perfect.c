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

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
*
* @tree: a pointer to the root node of the tree to check.
* Return: 1 if perfect, 0 if not.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int left_perfect;
	int right_perfect;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	if ((left_height == right_height) && (left_perfect == right_perfect))
		return (1);
	else
		return (0);
}
