#include "binary_trees.h"

/**
 * depth - measures the depth of the leftmost node
 * @tree: pointer to the root node of the tree to measure the depth
 * Return: depth of the tree
 */
int depth(const binary_tree_t *tree)
{
    int d = 0;
    while (tree != NULL)
    {
        d++;
        tree = tree->left;
    }
    return d;
}

/**
 * is_perfect_recursive - helper function to check if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @d: depth of the tree
 * @level: current level in the tree
 * Return: 1 if tree is perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int d, int level)
{
    if (tree == NULL)
        return 1;

    // If leaf node
    if (tree->left == NULL && tree->right == NULL)
        return (d == level + 1);

    // If internal node and one child is missing
    if (tree->left == NULL || tree->right == NULL)
        return 0;

    // Check recursively for every node
    return is_perfect_recursive(tree->left, d, level + 1) &&
           is_perfect_recursive(tree->right, d, level + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int d = depth(tree);
    return is_perfect_recursive(tree, d, 0);
}

