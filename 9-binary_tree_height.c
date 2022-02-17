#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Root node of the tree to meadure the height
 *
 * Return: Height of the node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t height1 = 0, height2 = 0;

		height1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		height2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((height1 > height2) ? height1 : height2);
	}
	return (0);
}
