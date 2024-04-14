#include "binary_trees.h"
/**
*binary_tree_rotate_right - Performs right rotation on a binary tree.
*
*@tree: Pointer to the root node to rotate.
*
*Return: Pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *tmp;

	new_root = tree->left;
	tmp = tree;

	new_root->parent = tmp->parent;

	if (new_root->right)
	{
		tmp->left = new_root->right;
		new_root->right->parent = tmp;
		tmp->parent = new_root;
		new_root->right = tmp;
		return (new_root);
	}
	else
	{
		tmp->parent = new_root;
		tmp->left = NULL;
		new_root->right = tmp;
		return (new_root);
	}
}
