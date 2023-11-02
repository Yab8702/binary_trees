#include "binary_trees.h"

/**
 * binary_tree_rotate_left - finds the lowest common ancestor of two nodes
 * @tree: a pointer to the first node
 *
 * Return: If no common ancestor was found return NULL
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root_anc;

	if (tree == NULL || tree->right == NULL)
		return (tree);
	
	root_anc = tree->right;

	if (root_anc->left)
	{
		tree->right = root_anc->left;
		root_anc->left->parent = tree;
	}
	else
	{
		tree->right = NULL;
	}

	root_anc->left = tree;
	root_anc->parent = tree->parent;
	tree->parent = root_anc;

	return (root_anc);
}
