#include "binary_trees.h"
#include <stdlib.h>
/**
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right && node->parent)
		return (1);
	else
		return (0);
}
