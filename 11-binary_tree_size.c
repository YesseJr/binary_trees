#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Root node of the tree to measure the size
 *
 * Return: Size of the node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t count;

if (tree == NULL)
	return (0);

count = binary_tree_size(tree->left) + 1;
count += binary_tree_size(tree->right);

return (count);
}
