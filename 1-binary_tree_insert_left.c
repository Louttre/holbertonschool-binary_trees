#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as a left-child
 * @parent: parent of the new node
 * @value: value stored in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = newNode;
	}
	else
	{
		newNode->left = parent->left;
		parent->left = newNode;
		newNode->left->parent = newNode;
	}

	return (newNode);
}
