#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: tree to count the leaves
 * Return: number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_ttree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
