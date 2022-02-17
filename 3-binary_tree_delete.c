#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree from memory.
 * @tree: The tree to delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left); /* if (tree->left); */
		binary_tree_delete(tree->right); /* if (tree->right) */
		free(tree);
	}
}
