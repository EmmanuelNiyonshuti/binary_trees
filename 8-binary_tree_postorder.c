#include "binary_trees.h"
/**
* binary_tree_postorder - Goes through a binary tree
*						using post-order traversal.
*@tree: Pointer to the root node of the tree to traverse.
*@func: Pointer to a function that takes an int.
*
* Return: Void.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/*left traversal*/
	binary_tree_postorder(tree->left, func);
	/*right traversal*/
	binary_tree_postorder(tree->right, func);
	/*root traversal*/
	func(tree->n);
}
