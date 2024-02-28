#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree
 * Return: 0 if tree is NULL, otherwise the results
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (height(tree->right) == height(tree->left))
	{
		return (binary_full(tree));
	}

	return (0);
}


/**
 * height - checks for height of a given tree
 * @tree: is a pointer to the root node
 * Return: 0 if tree is NULL, otherwise the height
*/
int height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree)
	{
		if (tree->left)
			l += 1 + height(tree->left);

		if (tree->right)
			r += 1 + height(tree->right);

		return ((l > r) ? l : r);
	}

	return (0);
}

/**
 * binary_full - checks if a tree is full
 * @tree: is a pointer to the root node of the tree
 * Return: 1 if tree full otherwise 0
*/
int binary_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->right && !tree->left)
			return (1);

		if (tree->left && tree->right)
		{
			return (binary_full(tree->left) &&
				binary_full(tree->right));
		}
	}

	return (0);
}
