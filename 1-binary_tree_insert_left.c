#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 *			or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_left;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		old_left = parent->left;
		parent->left = new_node;
		parent->left->left = old_left;
		old_left->parent = parent->left;
	}
	else
		parent->left = new_node;

	return (new_node);
}
