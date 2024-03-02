#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    /* If tree is NULL, return 0 */
    if (tree == NULL)
        return (0);

    /* Recursively calculate the height of the left and right subtrees */
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Return the height of the taller subtree, plus one for the current node */
    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}
