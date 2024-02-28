#include "binary_trees.h"

/**
 * binary_tree_height - Calucate the height of a binary tree.
 * @tree: point to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		if (tree->left != NULL)
			left_height = 1 + binary_tree_height(tree->left);
		if (tree->right != NULL)
			right_height = 1 + binary_tree_height(tree->right);

		return ((left_height >= right_height) ? left_height : right_height);
	}

	return (0);
}
