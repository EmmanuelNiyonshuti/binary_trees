#include "binary_trees.h"

/**
 *binary_tree_height - Measures the height of a binary tree.
 *@tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int len_left, len_right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	len_left = binary_tree_height(tree->left);
	len_right = binary_tree_height(tree->right);

	return (len_left > len_right ? len_left + 1 : len_right + 1);
}
