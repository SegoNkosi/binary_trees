#include "binary_trees.h"

/**
 * recursive_depth - Function to measure the depth of a node in a binary tree
 *
 * @tree: tree root
 * Return: the depth of a node in a binary tree
 */
size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - Function to call recursive_depth to return the depth
 * of a node in a binary tree
 *
 * @tree: tree root
 * Return: the depth of the tree or 0 if tree is NULL;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}
