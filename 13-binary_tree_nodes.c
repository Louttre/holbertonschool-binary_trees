#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root of the tree
 * Return: number of node with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		return (count + 1);
	}
	return (count);
}
