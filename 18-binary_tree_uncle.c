#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         the parent is NULL, the grandparent is NULL,
 *         or if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    /* Obtain the grandparent of the node */
    binary_tree_t *grandparent = node->parent->parent;

    /* Determine if the parent is a left child or a right child of the grandparent */
    if (grandparent->left == node->parent)
    {
        /* If the parent is a left child, return the right child of the grandparent */
        return (grandparent->right);
    }
    else
    {
        /* If the parent is a right child, return the left child of the grandparent */
        return (grandparent->left);
    }
}
