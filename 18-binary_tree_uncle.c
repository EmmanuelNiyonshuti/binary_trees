#include "binary_trees.h"
/**
*binary_tree_uncle - Finds the uncle of a node in a binary tree.
*@node: The node to find uncle of.
*
* Return: The node's uncle or NULL on failure.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (!node->parent->parent->left || !node->parent->parent->right)
		return (NULL);

	return ((node->parent->parent->right == node->parent) ?
		node->parent->parent->left : node->parent->parent->right);

}
