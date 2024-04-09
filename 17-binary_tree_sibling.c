#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node
 * Return: pointer to the sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!node || !node->parent)
		return (NULL);
	temp = node->parent;
	if (temp->right->n == node->n && temp->left)
		return (temp->left);
	else if (temp->right)
		return (temp->right);
	return (NULL);
}
