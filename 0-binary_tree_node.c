#include "binary_trees.h"

/**
 * binary_tree_node - Creating a binary tree node.
 * @parent: point to the parent of the new node.
 * @value: value to be stored in the new node.
 *
 * Return: If memory allocation fails or an error occurs - NULL.
 *         Otherwise - a pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
