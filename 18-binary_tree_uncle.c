#include "binary_trees.h"
#include <stdlib.h>
/**
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	temp = node->parent->parent;
	if(temp->right->n == node->parent->n  && temp->left)
		return (temp->left);
	else if (temp->right)
		return (temp->right);
	return (NULL);
}