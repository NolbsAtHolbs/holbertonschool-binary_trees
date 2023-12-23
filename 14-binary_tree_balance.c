#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor of the tree, 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		height_l = (int)binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		height_r = (int)binary_tree_height(tree->right) + 1;
	}
	return (height_l - height_r);
}
