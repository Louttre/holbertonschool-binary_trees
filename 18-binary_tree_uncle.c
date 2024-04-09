#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 * Return: pointer to the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	temp = node->parent->parent;
	if (temp->right == node->parent)
		return (temp->left);
	else
		return (temp->right);
}
