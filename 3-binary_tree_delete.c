#include "binary_trees.h"

/**
 * _deleteTree - recursively deletes if the binary tree
 * @node: binary tree node
 * Return: Nothing
 */


void _deleteTree(binary_tree_t *node)
{
	if (node->left)
	{
		_deleteTree(node->left);
		free(node->left);
	}
	if (node->right)
	{
		_deleteTree(node->right);
		free(node->right);
	}
}


/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: binary tree
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		_deleteTree(tree);
		free(tree);
	}
}
