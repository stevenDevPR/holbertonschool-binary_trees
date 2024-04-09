#include "binary_trees.h"
#include <stddef.h>

/**
*binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
*@tree: pointer to the root node of the tree to count the number of nodes
*
*Return: number of nodes with at least one child, 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL || tree->right != NULL)
{
nodes = 1;
nodes += binary_tree_nodes(tree->left);
nodes += binary_tree_nodes(tree->right);
}
else
{
     
nodes += binary_tree_nodes(tree->left);
nodes += binary_tree_nodes(tree->right);
}

return nodes;
}

