#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: poionter to the node to insert the left-child in
* @value: value to store in new node
* Return: pointer to the created node, or NULL on failure / if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
