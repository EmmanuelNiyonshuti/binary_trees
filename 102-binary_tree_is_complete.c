#include "binary_trees.h"

/**
 * size_binary_tree - Recursively calculates the size of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Size of the binary tree.
 */
int size_binary_tree(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + size_binary_tree(tree->left) + size_binary_tree(tree->right));
}

/**
 * binary_tree_completness - Checks the completeness of a binary tree.
 *
 *@tree: Pointer to the root node of the tree.
 *@size: Total size of the tree.
 *@i: Index of the current node.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_completness(const binary_tree_t *tree, int size, int i)
{
	if (!tree)
		return (1);
	if (i >= size)
		return (0);
	return (binary_tree_completness(tree->left, size, 2 * i + 1) &&
			binary_tree_completness(tree->right, size, 2 * i + 2));
}
/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 *
 *@tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if binary tree is complete, 0 if tree is NULL or incomplete.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size;

	if (!tree)
		return (0);
	size = size_binary_tree(tree);

	return (binary_tree_completness(tree, size, 0));
}
