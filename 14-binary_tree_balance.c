#include "binary_trees.h"

/* Prototype for the height function */
int height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (height(tree->left) - height(tree->right));
}

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */
int height(const binary_tree_t *tree)
{
    int left_height = 0, right_height = 0;

    if (tree == NULL)
        return (0);

    left_height = height(tree->left) + 1;
    right_height = height(tree->right) + 1;

    return (left_height > right_height) ? left_height : right_height;
}

