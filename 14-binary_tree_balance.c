#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 * @tree: is a pointer to the root node of the
 * tree to measure
 * Return: 0 if tree is NULL, otherwise the results
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);

	else
	{
		if (tree->left)
			left = 1 + binary_tree_balance(tree->left);

		if (tree->right)
			right = 1 + binary_tree_balance(tree->right);
	}

	return (left - right);
}
