#include "binary_trees.h"

/**
 * binary_tree_rotate_right - finds the lowest common ancestor of two nodes
 * @tree: a pointer to the first node
 *
 * Return: If no common ancestor was found return NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root_ans;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	root_ans = tree->left;

	if (root_ans->right)
	{
		tree->left = root_ans->right;
		root_ans->right->parent = tree;
	}
	else
	{
		tree->left = NULL;
	}

	root_ans->right = tree;
	root_ans->parent = tree->parent;
	tree->parent = root_ans;

	return (root_ans);
}
