#include "binary_trees.h"
/**
*binary_tree_rotate_left - Performs left rotation on a binary tree.
*
*@tree: Pointer to the root node to rotate.
*
*Return: Pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *tmp;

	if (!tree || !tree->right)
		return (0);
	new_root = tree->right;
	tmp = tree;
	new_root->parent = tmp->parent;

	if (new_root->left)
	{
		tmp->right = new_root->left;
		tmp->parent = new_root;
		new_root->left = tmp;
		return (new_root);
	}
	else
	{
		tmp->parent = new_root;
		tmp->right = NULL;
		new_root->left = tmp;
		return (new_root);
	}
}
