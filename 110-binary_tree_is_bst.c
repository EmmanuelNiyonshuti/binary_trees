#include "binary_trees.h"

/**
*bst_inorder - Traverses binary search tree in inorder traversal technique.
*it ensures that the values encountered are in ascending order.
*
*@tree: Pointer to the current node in the tree.
*@prev_val: Pointer to the value of the previous node.
*
*Return: 1 if a binary tree is binary search tree or 0 if not.
*/
int bst_inorder(const binary_tree_t *tree, int *prev_val)
{
	if (!tree)
		return (1);
	if (!bst_inorder(tree->left, prev_val))
		return (0);
	if (*prev_val != -1 && tree->n <= *prev_val)
		return (0);
	*prev_val = tree->n;
	return (bst_inorder(tree->right, prev_val));
}
/**
* binary_tree_is_bst - Checks if a binary tree is a binary search tree.
*
* @tree: Pointer to the root node.
*
*Return: 1 if binary tree is bst or 0 on failure.
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev_val = -1;

	if (!tree)
		return (0);
	return (bst_inorder(tree, &prev_val));
}
