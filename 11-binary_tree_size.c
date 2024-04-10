#include "binary_trees.h"

/**
*binary_tree_size - Measures the size of a binary tree.
*@tree: Pointer to the root node of the tree to measure the size.
*
*Return: Size of the node or 0 if current node is NULL.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
