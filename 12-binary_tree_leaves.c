#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: counts the leaves in a binary tree
 *
 * Return: counts of a binary tree leaves
 *			0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);

	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);

	return (left_count + right_count);
}
