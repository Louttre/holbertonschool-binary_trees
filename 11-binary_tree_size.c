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
	if (tree == NULL)
	{
		return (0);
	}
	
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
