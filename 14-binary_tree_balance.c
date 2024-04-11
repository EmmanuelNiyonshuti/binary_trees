#include "binary_trees.h"
/**
*binary_tree_h - Gets the maximum height of binary tree.
*@tree: Pointer to the tree.
*
*Return: The height of the tree.
*/
int binary_tree_h(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	l = (tree->left) ? 1 + binary_tree_h(tree->left) : 1;
	r = (tree->right) ? 1 + binary_tree_h(tree->right) : 1;

	return (l > r ? l : r);
}
/**
*binary_tree_balance - Measures the balance factor of a binary tree.
*@tree: Pointer to the root node of the tree to measure the balance factor.
*
*Return: balance factor of a binary tree or 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_r, h_l, BF;

	if (!tree)
		return (0);
	h_l = binary_tree_h(tree->left);
	h_r = binary_tree_h(tree->right);

	BF = h_l - h_r;

	return (BF);
}
