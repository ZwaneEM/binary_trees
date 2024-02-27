#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure.
 * Return: height / 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0, right_height = 0;

    if (!tree)
        return (0);

    else
    {
        if (tree->left)
            left_height = 1 + binary_tree_height(tree->left);
        if (tree->right)
            right_height = 1 + binary_tree_height(tree->right);

        return (max(left_height, right_height));
    }
}

/**
 * max - returns the bigger amount between the two
 * arguments
 * @value1: The first value
 * @value2: The second value
 * Return: The bigger amount
*/
size_t max(size_t value1, size_t  value2)
{
    return ((value1 > value2) ? value1 : value2);
}