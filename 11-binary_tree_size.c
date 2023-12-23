#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
* Return: size of the tree, 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_side_size = 0;
	size_t right_side_size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_side_size = binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		right_side_size = binary_tree_size(tree->right);
	}
	return (left_side_size + right_side_size + 1);
}
