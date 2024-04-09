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
if (tree == NULL)
	return (0);

size_t left_size = binary_tree_size(tree->left);
size_t right_size = binary_tree_size(tree->right);

return (left_size + right_size) + 1;
}
