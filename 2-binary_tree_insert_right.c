#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the right of a \
 * given binary tree node.
 * @parent: The parent of the new binary tree node.
 * @value: The value of the new node to be inserted.
 *
 * Return: A ponter to the created node, otherwise NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
