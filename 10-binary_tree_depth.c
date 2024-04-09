#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to the root of the tree to check
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t count = 0;
	
	if (!tree)
		return (0);
	while (temp->parent)
	{
		temp = temp->parent;
		count++;
	}
	return (count);
}
