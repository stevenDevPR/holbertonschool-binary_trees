#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to the node to find the sibling of
* Return: pointer to the sibling node, or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return NULL;

if (node->parent->left == node)
return node->parent->right;
else
return node->parent->left;
}

/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to the node to find the uncle of
* Return: pointer to the uncle node, or NULL if no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

return (binary_tree_sibling(node->parent));
}

