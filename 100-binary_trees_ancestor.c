#include "binary_trees.h"


/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: The first node in the tree.
 * @second: The second node in the tree.
 *
 * Return: Pointer to the LCT of the two nodes or NULL on failure.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	int depth_first, depth_sec;

	if (!second || !first)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_sec = binary_tree_depth(second);

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
	while (depth_first && depth_sec)
	{
		if (depth_first == depth_sec)
		{
			return ((binary_tree_t *)first);
		}
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
