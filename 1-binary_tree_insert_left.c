#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *@parent: Pointer to the node to insert the left-child in.
 *@value: The value to store in the new node.
 *
 * Return: Pointer to the created node.
 *	NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;

	if (!parent)
		return (NULL);
	new_left_child = malloc(sizeof(binary_tree_t));
	if (!new_left_child)
		return (NULL);
	new_left_child->n = value;
	new_left_child->parent = parent;
	new_left_child->left = NULL;
	new_left_child->right = NULL;

	/*when parent already has a left child*/
	if (parent->left)
	{
		/*make parent left child a left child of the new left child*/
		new_left_child->left = parent->left;
		new_left_child->left->parent = new_left_child;
	}
	parent->left = new_left_child;

	return (new_left_child);
}
