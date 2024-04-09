#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;
	

	if(!tree)
		return (0);
	if (tree->right)
	{
		right += binary_tree_balance(tree->right);
		return (right + 1);
	}
	if (tree->left)
	{
		left += binary_tree_balance(tree->left);
		return (left + 1);
	}
	return (left - right);
}
