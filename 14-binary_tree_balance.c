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
	if (tree)
	{
		return (height(tree->left) - height(tree->right));
	}

	return (0);
}

/**
 * height - measures the height of the tree
 * @tree: The root node to measure
 * Return: The height of the tree
 */
int height(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree)
	{
		r = ((tree->left) ? 1 + height(tree->right) : 1);

		l = ((tree->right) ? 1 + height(tree->left) : 1);

		return ((l > r) ? l : r);
	}
	return (0);
}

