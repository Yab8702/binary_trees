#include "binary_trees.h"

/**
 * binary_tree_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: If no common ancestor was found return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *pa_first, *pa_second;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	pa_first = first->parent;
	pa_second = second->parent;

	if (first == pa_second || !pa_first || (!pa_first->parent && pa_second))
		return (binary_trees_ancestor(first, pa_second));

	else if (second == pa_first || !pa_second || (!pa_second->parent && pa_first))
		return (binary_trees_ancestor(second, pa_first));

	return (binary_trees_ancestor(pa_first, pa_second));
}
