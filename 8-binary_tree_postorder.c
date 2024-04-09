#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - function that goes through a binary tree using postoerder traversal
 * @tree: pointer to the root of the tree
 * @func: function pointer
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
