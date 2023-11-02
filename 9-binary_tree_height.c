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
	size_t right_s = 0, left_s = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_s = binary_tree_height(tree->left) + 1;
	right_s = binary_tree_height(tree->right) + 1;

	if (left_s > right_s)
		return (left_s);
	return (right_s);
}
