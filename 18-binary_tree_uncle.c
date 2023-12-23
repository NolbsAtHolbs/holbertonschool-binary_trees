#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to the node to find the uncle
* Return: pointer to the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa = NULL;

	if (!node || !node->parent || !node->parent->parent)
	{
		return (0);
	}
	grandpa = node->parent->parent;
	if (grandpa->left == NULL || grandpa->right == NULL)
	{
		return (0);
	}
	if (grandpa->left->n == node->parent->n)
	{
		return (grandpa->right);
	}
	return (grandpa->left);
}
