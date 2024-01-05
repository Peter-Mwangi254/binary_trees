#include "binary_trees.h"

/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling node, NULL on any failure
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
{
	return (NULL);
}

if (node == node->parent->left)
{
	return (node->parent->right);
} else
{
	return (node->parent->left);
}
}


/**
* binary_tree_uncle - function that finds the uncle of a node
* @node: the node whose uncle is to be found
* Return: a pointer to the uncle of the given node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));

}
