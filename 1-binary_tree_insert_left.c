#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the node to insert the left child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left child, the new node takes its place,
 * and the old left child becomes the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* If parent already has a left child */
	if (parent->left != NULL)
	{
		/* Set the new node's left child to parent's current left child */
		new_node->left = parent->left;
		/* Update the parent of the current left child to be the new node */
		parent->left->parent = new_node;
	}
	/* Set parent's left child to the new node */
	parent->left = new_node;

	return (new_node);
}
