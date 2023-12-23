#include "binary_trees.h"
#include "11-binary_tree_size.c"
/**
* binary_tree_is_perfect - checks whether a tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size_l = 0, size_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		size_l = binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		size_r = binary_tree_size(tree->right);
	}
	if (size_l != size_r)
	{
		return (0);
	}
	return (1);
}
