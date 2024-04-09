#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: tree to measure
 * Return: number of node in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);
	return (count + 1);
}
