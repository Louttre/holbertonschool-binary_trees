#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t count = 0;
	
	if (!tree)
		return (0);
	while (temp->parent)
	{
		temp = temp ->parent;
		count++;
	}
	return (count);
}
