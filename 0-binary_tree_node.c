#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: The parent node of the new binary tree node.
 * @value: The value of the new binary tree node.
 *
 * Author: Waython Yesse
 * Return: A pointer to the created node, otherwise NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode != NULL)
	{        
		newnode->left = NULL;
		newnode->right = NULL;
        newnode->parent = parent;
		newnode->n = value;
	}
	return (newnode);
}
