#include "binary_trees.h"

/**
* binary_tree_is_leaf - function that checks if a node is a leaf
* @node: pointer to the node to check
* Return: 1 if the node is a leaf, 0 if not a leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL && !node->left && !node->right)
{
return (1);
}
return (0);
}
