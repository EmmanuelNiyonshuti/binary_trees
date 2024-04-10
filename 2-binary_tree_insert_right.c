#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another.
 *
 * @parent: Pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failue or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;

	if (!parent)
		return (NULL);

	new_right_child = malloc(sizeof(binary_tree_t));
	if (!new_right_child)
		return (NULL);

	new_right_child->n = value;
	new_right_child->parent = parent;
	new_right_child->left = NULL;
	new_right_child->right = NULL;

	if (parent->right)
	{
		new_right_child->right = parent->right;
		new_right_child->right->parent = new_right_child;
	}
	parent->right = new_right_child;

	return (new_right_child);
}
