#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node,
 * if node is NULL or the parent is NULL, return NULL
 * if node has no sibling, return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->right == node)
		{
			if (node->parent->left)
			return (node->parent->left);
		}
		else
		{
			if (node->parent->right)
				return (node->parent->right);
		}
	}

	return (NULL);
}
