#include "binary_trees.h"

/**
 * binary_tree_inorder - Going through a binary tree using in-order traversal.
 * @tree:  point to the root node of the tree to traverse.
 * @func:  point to a function to call  each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
