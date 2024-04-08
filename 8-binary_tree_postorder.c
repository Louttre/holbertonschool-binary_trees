#include "binary_trees.h"
#include <stdlib.h>
/**
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
