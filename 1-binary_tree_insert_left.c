#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert a new node as the left child of
 * another node
 * @parent: pointer to the node where the left child will be inserted
 * @value: value to store in the new node
 * Return: a pointer to the created node or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_child;

if (!parent)
{
return (NULL);
}

left_child = malloc(sizeof(binary_tree_t));
if (!left_child)
{
return (NULL);
}
left_child->n = value;
left_child->parent = parent;
left_child->right = NULL;
left_child->left = parent->left;
parent->left = left_child;
if (left_child->left)
left_child->left->parent = left_child;

return (left_child);
}
