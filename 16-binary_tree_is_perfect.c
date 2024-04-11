#include "binary_trees.h"
/**
*binary_tree_h - gets the height of the binary tree.
*@tree: Pointer to the tree to go through.
*
*Return: The Height , 0 on failure.
*/
int binary_tree_h(binary_tree_t *tree)
{
    int len_left, len_right;

    if (!tree)
    return -1;

    if (!tree->left && !tree->right)
    return 0;

    len_left = binary_tree_h(tree->left);
    len_right = binary_tree_h(tree->right);

    return (len_left > len_right ? len_left + 1 : len_right + 1);
}
/*
*binary_tree_f - checking if the internal nodes have 2 subtrees
*@tree: Pointer to the tree to go through.
*
*Return: 1 on success 0 on failure.
*/
int binary_tree_f(const binary_tree_t *tree)
{
    if (!tree)
        return 1; // An empty tree is considered a full binary tree

    if (!tree->left && !tree->right)
        return 1; // Leaf node is considered full

    if (tree->left && tree->right)
        return binary_tree_f(tree->left) && binary_tree_f(tree->right);

    return 0;

}
/**
*binary_tree_is_perfect - Checks if a binary tree is perfect.
*@tree: The tree.
*
*Return: 1 if tree is perfect 0 if tree is not perfect or is NULL.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    return binary_tree_f(tree) && (binary_tree_h(tree->left) == binary_tree_h(tree->right));  
}