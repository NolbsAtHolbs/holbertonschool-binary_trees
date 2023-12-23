#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: height of tree, or 0 if NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		leftHeight = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		rightHeight = 1 + binary_tree_height(tree->right);
	}
	if (leftHeight > rightHeight)
	{
		return (leftHeight);
	}
	else
	{
		return (rightHeight);
	}
}
