#include "binary_trees.h"
#include <stdlib.h>
/**
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);
	temp = parent->right;
	if (temp)
	{
		new->right = temp;
		temp->parent = new;
	}
	else
	{
		new->left = NULL;
		new->right = NULL;
	}
	new->parent = parent;
	new->n = value;
	parent->right = new;
	return (new);
}
