#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent of the new node
 * @value: value to be stored in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	new->n = value;
	return (new);
}
