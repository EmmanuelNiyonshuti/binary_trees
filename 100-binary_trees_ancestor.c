#include "binary_trees.h"

/**
*_binary_tree_depth - Measures the depth of a node in a binary tree.
*@tree: Pointer to the node to measure the depth.
*
*Return: height of the tree or 0 if tree is NULL.
*/
size_t _binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (_binary_tree_depth(tree->parent) + 1);
}
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *@first: Pointer to a node in the tree.
 *@second: Pointer to a node in the tree.
 *
 *Return: LCA of the two nodes in a binary tree or NULL on failure.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	int depth_first, depth_sec;

	if (!first || !second)
		return (NULL);

	depth_first = _binary_tree_depth(first);
	depth_sec = _binary_tree_depth(second);

	while (depth_first > depth_sec)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_sec > depth_first)
	{
		second = second->parent;
		depth_sec--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)second);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)second);
}
