#include "binary_trees.h"

/**
*binary_tree_sibling - Finds the sibling of a node in a binary tree.
*
*@node: The node to find the sibling of.
*
*Return: Pointer to the sibling of a node or NULL on failure.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib;

	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->left || !node->parent->right)
		return (NULL);

	return ((node->parent->right == node) ? (sib = node->parent->left)
			: (sib = node->parent->right));
}
