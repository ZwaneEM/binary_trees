#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 * @tree: is a pointer to the node of the tree to count
 * the number of nodes
 * Return: 0 if tree is NULL otherwise the results
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	else
	{
		if (tree->left || tree->right)
			nodes += 1;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
