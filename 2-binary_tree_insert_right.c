#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 *			or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		old_right = parent->right;
		parent->right = new_node;
		parent->right->right = old_right;
		old_right->parent = parent->right;
	}
	else
		parent->right = new_node;

	return (parent->right);
}
