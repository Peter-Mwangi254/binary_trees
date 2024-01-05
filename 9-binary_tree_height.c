#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: tree to measure the height of
* Return: height of the tree
* 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
{
if (tree == NULL)
{
return (0);
}

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
}
}
