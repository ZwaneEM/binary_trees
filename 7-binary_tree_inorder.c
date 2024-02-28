#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using
 * in-order traversal
 * @tree: Is a pointer to the root of the tree traversal
 * @func: Is a pointer to a function to call for each node
 * Return: Nothing
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
