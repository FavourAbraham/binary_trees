#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    /* Create new node */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* If parent already has a left child */
    if (parent->left != NULL)
    {
        /* Set new node's left child to current left child */
        new_node->left = parent->left;
        /* Set current left child's parent to new node */
        parent->left->parent = new_node;
    }

    /* Set parent's left child to new node */
    parent->left = new_node;

    return (new_node);
}
