#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
*
* @tree: a pointer to the target node. 
* Return: depth of tree (count).
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	
	if (tree == NULL)
		return (0);
		
	/*traverse through the nodes*/
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
