#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts nodes with at least 1 child in a BT
 * @tree: Root node of the tree to count the number of nodes
 *
 * Return: Number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
}
