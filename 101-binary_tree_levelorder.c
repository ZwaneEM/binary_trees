#include "binary_trees.h"

int Number_levels(binary_tree_t *tree);
void Print_current_level(binary_tree_t *tree, int levels, void (*func)(int));

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 * Return: Nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int levels, i;

	if (!func || !tree)
		return;

	levels = Number_levels((binary_tree_t *)tree) + 1;

	for (i = 1; i <= levels; i++)
		Print_current_level((binary_tree_t *)tree, i, func);
}

/**
 * Number_levels - measures the number of levels in a tree
 * @tree: is a pointer to the root node of the tree
 * Return: -1 if it failed or number of levels
 */
int Number_levels(binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (-1);

	if (tree->left)
		l = 1 + Number_levels(tree->left);

	if (tree->right)
		r = 1 + Number_levels(tree->right);

	return ((l > r) ? l : r);
}

/**
 * Print_current_level - print the current level of the tree
 * @tree: is pointer to the root node of the tree
 * @levels: The number of levels in the tree
 * @func: The pointer to the function to print
 * Return: Nothing
 */
void Print_current_level(binary_tree_t *tree, int levels, void (*func)(int))
{
	if (!tree)
		return;

	if (levels == 1)
		func(tree->n);

	else if (levels > 1)
	{
		Print_current_level(tree->left, levels - 1, func);
		Print_current_level(tree->right, levels - 1, func);
	}
}
