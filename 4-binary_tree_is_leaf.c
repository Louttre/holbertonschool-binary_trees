#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node to check
 * Return: 0 if it's not a leaf else 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
