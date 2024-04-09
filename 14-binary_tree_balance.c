#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * height_counter - function that count the height of a tree
 * @tree: pointer to the root of the tree
 * Return: the height of the tree
 */
size_t height_counter(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (-1);
	left = height_counter(tree->left);
	right = height_counter(tree->right);
	return (left > right ? left + 1 : right + 1);
}
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height_counter(tree->left) - height_counter(tree->right));
}
