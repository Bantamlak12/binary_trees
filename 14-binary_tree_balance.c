#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of a binary tree
 *			0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height, balance_factor;

	if (tree != NULL)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		balance_factor = left_height - right_height;

		return (balance_factor);
	}
	return (0);
}

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree != NULL)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}
