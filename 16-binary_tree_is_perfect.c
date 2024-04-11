#include "binary_trees.h"
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
    t_l = binary_tree_is_full(tree->left);
    t_r = binary_tree_is_full(tree->right);
    h_r = binary_tree_height(tree->left);
    h_l = binary_tree_height(tree->right);
    if (((t_l && t_r) == 1) && (h_r == h_l))
        return (1);
    return (0);
}