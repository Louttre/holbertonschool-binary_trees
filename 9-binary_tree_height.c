#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
size_t node_counter(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (1);
	count += node_counter(tree->left);
	count += node_counter(tree->right);
	return (count);
}
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t node;
	size_t count = 1;
	size_t height = 0;

	node = node_counter(tree) - 1;
	if (node == 2)
		return (1);
	if (node == 1)
		return (0);
	while (count + 1 < node)
	{
		height++;
		count *= 2;
	}
	return (height);
}
