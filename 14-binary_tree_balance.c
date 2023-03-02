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
	int left_height = 0, right_height = 0, balance_factor;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	balance_factor = left_height - right_height;

	return (balance_factor);
}
