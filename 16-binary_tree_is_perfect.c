#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
int perfect_check(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	left += perfect_check(tree->left) + 1;
	right += perfect_check(tree->right) + 1;
	return (left == right ? left + right + 1 : 0);
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check;

	check = perfect_check(tree);
	if (check)
		return (1);
	return (0);
}
