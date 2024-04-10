#include "binary_trees.h"

/**
*binary_tree_depth - Measures the depth of a node in a binary tree.
*@tree: Pointer to the node to measure the depth.
*
*Return: height of the tree or 0 if tree is NULL.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int p;

	if (!tree || !tree->parent)
		return (0);
	p = binary_tree_depth(tree->parent);
	return (p + 1);
}
