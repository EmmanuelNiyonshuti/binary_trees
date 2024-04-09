#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * 
 * @node: Pointer to the node to check.
 *
 * Return: 1 if a node is a leaf, 0 otherwise or if node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
	{
		return (1);
	}
	binary_tree_is_leaf(node->left);
        binary_tree_is_leaf(node->right);

	return (0);
}
