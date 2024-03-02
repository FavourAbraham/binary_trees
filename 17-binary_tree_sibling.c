#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *         the parent is NULL, or if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* If the node is a left child, return the right child of its parent */
    if (node->parent->left == node)
        return (node->parent->right);

    /* If the node is a right child, return the left child of its parent */
    if (node->parent->right == node)
        return (node->parent->left);

    /* If the node has no sibling, return NULL */
    return (NULL);
}
