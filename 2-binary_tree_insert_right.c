#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserting a node as the right-child of another node
 * @parent: node to which the new_node will be added
 * @value: value for the new node
 * Return: A point to the newly created node or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);

}
