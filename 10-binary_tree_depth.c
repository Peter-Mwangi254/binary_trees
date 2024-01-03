#include "binary_trees.h"

/**
* binary_tree_depth - function that measures the depth of a
* node in a binary tree
* @tree: pointer to the node to measure the depth
* Return: depth of node or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth_node = 0;
if (tree == NULL)
{
return (0);
}
while (tree->parent)
{
depth_node += 1;
tree = tree->parent;
}
return (depth_node);
}
