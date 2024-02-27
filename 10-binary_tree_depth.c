#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * in a binary
 * @tree: is a pointer to the node to measure
 * Return: 0 if tree is NULL, or the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (!tree)
        return (0);

    else
    {
        if (tree->parent)
        {
            depth = 1 + binary_tree_depth(tree->parent);
        }

        return (depth);
    }
}