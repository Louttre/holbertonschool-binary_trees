#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *leftHeight = NULL;
	binary_tree_t *rightHeight = NULL;

	if (tree == NULL)
	{
		return (0);
	}

	leftHeight = tree->left;
	rightHeight = tree->right;

	if ((leftHeight == NULL) && (rightHeight == NULL))
	{
		return (1);
	}

	if (binary_tree_height(leftHeight) != binary_tree_height(rightHeight))
	{
		return (0);
	}
	else
	{
	return (binary_tree_is_perfect(leftHeight)
		&& binary_tree_is_perfect(rightHeight));
	}

}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: O if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
}
