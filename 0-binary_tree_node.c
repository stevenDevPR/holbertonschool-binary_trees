#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node of the new node (can be NULL for root)
 * @value: The value to store in the new node
 *
 * Return: A pointer to the newly created binary tree node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/**
	 * allocate memory in the heap
	 */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    /**
     * Check if memory allocation failed
     */
	if (new_node == NULL)
	{
		return (NULL);
	}

    /**
     *  Set the new node data and initialize child pointers to NULL
     */
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/**
	 * Parent information is stored
	 */
	new_node->parent = parent;

	return (new_node);
}
