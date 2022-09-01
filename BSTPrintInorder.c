# include "header.h"

/*
    This function is used to print the Binary Search Tree in the correct order.
*/

void BSTPrintInorder(BST * node) {

    // If the root is empty exit the function.

    if (node == NULL)   {
        return;
    }

    // Algorithm to print the Binary Search Tree in order.
    BSTPrintInorder(node->left);
    printf("%d\n", node->data);
    BSTPrintInorder(node->right);
}