#include "binary_trees.h"
#include <stddef.h>
/**
 *binary_tree_size - Measures the size of a binary tree
 *@tree: pointer to the root node
 *
 *Return: size of the binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{

size_t left_size, right_size;

if (tree == NULL)
	return (0);

left_size = binary_tree_size(tree->left);
right_size = binary_tree_size(tree->right);
return ((left_size + right_size) +1);
}
