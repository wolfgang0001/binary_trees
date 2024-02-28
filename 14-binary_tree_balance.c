#include "binary_trees.h"

/**
 * binary_tree_balance - Calucate the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to calucate the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Calcuate the height of a binary tree.
 * @tree:  point to the root node of the tree to calucate the height.
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
		else
			left_height = 1;
		if (tree->right != NULL)
			right_height = 1 + binary_tree_height(tree->right);
		else
			right_height = 1;

		return ((left_height >= right_height) ? left_height : right_height);
	}

	return (0);
}
