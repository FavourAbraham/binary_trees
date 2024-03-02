#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* If tree has no children, it is a full tree */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If tree has both children, check if both subtrees are full */
    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* If tree has only one child, it is not a full tree */
    return (0);
}
