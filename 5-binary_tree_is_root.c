#include "binary_trees.h"

/**
 * binary_tree_is_root -  Checking if a given node is a root
 * @node:  point for  the node to check.
 *
 * Return: If root - 1, Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
