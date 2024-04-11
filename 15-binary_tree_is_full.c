#include "binary_trees.h"
/**
*binary_tree_is_full - Checks if a binary tree is
*        full(every node has either 0 or 2 children).
*@tree: Pointer to tree to go through.
*
*Return: 0 if tree is NULL or 1 if it is full.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	return ((((r && l) && (tree->left && tree->right))
			 || (!tree->left && !tree->right)) ? 1 : 0);
}
