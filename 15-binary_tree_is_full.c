#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         else - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_s, right_s;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_s = binary_tree_is_full(tree->left);
		right_s = binary_tree_is_full(tree->right);
		return (left_s * right_s);
	}
	return (0);

}
