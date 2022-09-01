#include <stdio.h>          
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

/*
    BST structure consists of the data which is a single integer and the dynamic coonections right and left to the next node in the tree.
    We are creating a Binary Search Tree (BST) that folows the correct order and can perform the common operations.
*/

typedef struct binarySearchTree{
    int data; 		                    //integer value.
    struct binarySearchTree * left;     //dynamic connection to the left node in the BST.
    struct binarySearchTree * right;    //dynamic connection to the right node in the BST.
}BST;

// Common Binary Search Tree Operations (See functions for further explanations).

BST * addNewNode();

void BSTInsert(BST ** root, BST * node);

bool BSTRemove(BST ** root, int key);

bool BSTSearch(BST * root, int key);

int BSTGetHeight(BST * node);

void BSTPrintInorder(BST * node);

// Helper functions (See functions for further explanations).

void freeBST(BST * root);

int menu();