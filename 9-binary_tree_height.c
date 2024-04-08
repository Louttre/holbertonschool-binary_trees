#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
size_t height_counter(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (-1);
	left = height_counter(tree->left);
	right = height_counter(tree->right);
	return (left < right ? left + 1 : right + 1);
}
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);
	count = height_counter(tree);
	return (count);
}
