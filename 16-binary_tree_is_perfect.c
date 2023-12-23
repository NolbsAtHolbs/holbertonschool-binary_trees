#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
* binary_tree_is_perfect - checks whether a tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, i;
	size_t nodes = 1;

	if (tree == NULL)
	{
		return (0);
	}
	height = binary_tree_height(tree);

	for (i = 0; i < height; i++)
	{
		nodes *= 2;
	}
	return (nodes - 1 == binary_tree_size(tree));
}
