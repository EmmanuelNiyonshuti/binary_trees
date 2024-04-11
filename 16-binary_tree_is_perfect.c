#include "binary_trees.h"
/**
*binary_tree_h - Gets the height of the binary tree.
*@tree: Pointer to the tree to go through.
*
*Return: The height , 0 on failure.
*/
int binary_tree_h(binary_tree_t *tree)
{
	int len_left, len_right;

	if (!tree)
		return (0);

	len_left = binary_tree_h(tree->left);
	len_right = binary_tree_h(tree->right);
	if (!tree->left && !tree->right)
		return (1);

	return (len_left > len_right ? len_left + 1 : len_right + 1);
}
/**
*binary_tree_f - checks if the internal nodes have 2 subtrees.
*@tree: Pointer to the tree to go through.
*
*Return: 1 on success 0 on failure.
*/
int binary_tree_f(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);

	l = binary_tree_f(tree->left);
	r = binary_tree_f(tree->right);

	return ((((r && l) && (tree->left && tree->right))
			 || (!tree->left && !tree->right)) ? 1 : 0);
}
/**
*binary_tree_is_perfect - Checks if a binary tree is perfect.
*@tree: The tree.
*
*Return: 1 if tree is perfect 0 if tree is not perfect or is NULL.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	bool t_l, t_r;
	int h_l, h_r;

	if (!tree)
		return (0);
    if (!tree->left && !tree->right)
    return (1);
    t_l = binary_tree_f(tree->left);
    t_r = binary_tree_f(tree->right);
	h_r = binary_tree_h(tree->left);
	h_l = binary_tree_h(tree->right);
	if (((t_l && t_r) == 1) && (h_r == h_l))
		return (1);
	return (0);
}
