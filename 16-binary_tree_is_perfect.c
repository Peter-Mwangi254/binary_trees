#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);

}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree 0 if tree is NULL
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}


/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to be checked
* Return: 1 if tree is perfect, 0 íf tree is null and not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	perfect_size = (1 << (height + 1)) - 1;

	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
