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

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    /* If tree has no children, it is perfect */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* Calculate the height of the left and right subtrees */
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Check if the tree is full and has equal height in both subtrees */
    if (left_height == right_height &&
        binary_tree_is_perfect(tree->left) &&
        binary_tree_is_perfect(tree->right))
    {
        return (1);
    }

    return (0);
}
