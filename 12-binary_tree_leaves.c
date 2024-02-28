#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count
 * Return: 0 if tree is NULL otherwise number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t NoLeaves = 0;

	if (!tree)
		return (0);

	else
	{
		if (!tree->left && !tree->right)
			NoLeaves += 1;

		NoLeaves += binary_tree_leaves(tree->left);
		NoLeaves += binary_tree_leaves(tree->right);
	}

	return (NoLeaves);
}
