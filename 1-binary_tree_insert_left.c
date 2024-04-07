#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: parent of the new node
 * @value: value stored in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new;
	binary_tree_t *temp;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);
	temp = parent->left;
	if (temp)
	{
		new->left = temp;
		temp->parent = new;
	}
	else
	{
		new->left = NULL;
		new->right = NULL;
	}
	new->parent = parent;
	new->n = value;
	parent->left = new;
	return (new);
}
