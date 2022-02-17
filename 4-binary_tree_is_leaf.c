#include "binary_trees.h"

/**
 *binary_tree_is_leaf - check if a node is a leaf
 *@node: node
 *Return: 1 if leaf or 0 if NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
