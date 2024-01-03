#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: tree to measure the height of
* Return: height of the tree
* 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
{
if (tree == NULL)
{
return (0);
}

size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
}
}

/**
 * binary_tree_balance - Get balance factor of binary tree
 * @tree: Pointer to root of binary tree
 *
 * Return: Balance factor of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height;
int right_height;
if (tree == NULL)
{
return (0);
}
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}
