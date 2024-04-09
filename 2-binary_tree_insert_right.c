#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent of the new node
 * @value: value stored in the new node
 * Return: pointer to the new node
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
		new->right = NULL;
	new->left = NULL;
	new->parent = parent;
	new->n = value;
	parent->right = new;
	return (new);
}
