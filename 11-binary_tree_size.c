#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_s = 0, right_s = 0;

	if (!tree)
		return (0);

	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);

	return (left_s + right_s + 1);

}
