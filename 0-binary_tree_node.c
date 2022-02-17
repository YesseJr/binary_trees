#include "binary_trees.h"

/**
 * For this function - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @left: Pointer to the left child node.
 * @right: Pointer to the right child node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node or NULL on failure.
 * Author: Waython Yesse.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newbie_node;

	newbie_node = malloc(sizeof(binary_tree_t));
	if (newbie_node == NULL)
		return (NULL);

	newbie_node->n = value;
	newbie_node->parent = parent;
	newbie_node->left = NULL;
	newbie_node->right = NULL;

	return (newbie_node);
}
