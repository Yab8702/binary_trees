#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL return 0,
 * else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_s = 0, right_s = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_s = binary_tree_height(tree->left) + 1;
	right_s = binary_tree_height(tree->right) + 1;

	if (left_s > right_s)
		return (left_s);
	return (right_s);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	return (left_height - right_height);
}
