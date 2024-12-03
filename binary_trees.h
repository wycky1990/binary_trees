#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>


/* Data structures */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 *
 * @parent: Pointer to the parent node
 *
 * @left: Pointer to the left child node
 *
 * @right: Pointer to the right child node
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
/* Basic Binary Tree */
typedef struct binary_tree_s bst_t;
/* Binary Search Tree */
typedef struct binary_tree_s avl_t;
/* AVL Tree */
typedef struct binary_tree_s heap_t;
/* Max Binary Heap */


/**
 * struct levelorder_queue_s - Level order
 *                             traversal queue.
 *
 * @node: A node of a binary tree.
 *
 * @next: The next node to traverse
 *        to in the binary tree.
 */

typedef struct levelorder_queue_s
{
	binary_tree_t *node;
	struct levelorder_queue_s *next;
} levelorder_queue_t;



/* Helper Function, Printing function Prototype */
void binary_tree_print(const binary_tree_t *);



/* PROJECT TASKS FUNCTION PROTOTYPES */



/* For Measuring Balance Factor Of A Binary Tree */
/* Integer Types, int Function Prototypes */

int heap_extract(heap_t **root);
int binary_tree_is_avl(const binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_heap(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
int *heap_to_sorted_array(heap_t *heap, size_t *size);
int binary_tree_is_complete(const binary_tree_t *tree);



/* For Ordering A Binary Tree using Pre,In and Post-Order Traversal */
/* Void Order Types, void Function Prototypes */

void binary_tree_delete(binary_tree_t *tree);
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));



/* For Measuring The Size Of A Binary Tree */
/* size Types, size_t Function Prototypes */

size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);



/* For Rotation and Level-Order Traversal A Binary Tree Node */
/* binary_tree_t Types, binary_tree_t Function Prototypes */

binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second);



/* For A Value in a Binary Search Tree (BST) */
/* To Inserting, Searching, Removes, and from an array Builds BST */
/* Binary Search Tree Types, bst_t Function Prototypes */

bst_t *bst_remove(bst_t *root, int value);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);



/* For A Value in a Adelson-Velsky and Landis(AVL) Tree */
/* To Inserting, Searching, Removes, and from an array Builds AVL Tree */
/* AVL Binary Tree Types, avl_t Function Prototypes */

avl_t *avl_remove(avl_t *root, int value);
avl_t *avl_insert(avl_t **tree, int value);
avl_t *array_to_avl(int *array, size_t size);
avl_t *sorted_array_to_avl(int *array, size_t size);



/* For Extracts The Root Node Of A Max Binary Heap and */
/* For Convert A Binary Max Heap To A Sorted Array of Integers */
/* Binary Max Heap Types, heap_t Function Prototypes */

heap_t *heap_insert(heap_t **root, int value);
heap_t *array_to_heap(int *array, size_t size);



#endif /* _BINARY_TREES_H_ */
