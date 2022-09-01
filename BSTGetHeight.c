# include "header.h"

/*
    This is a function used to get the heigh of the Binary Search Tree (BST).
*/

int BSTGetHeight(BST * node)    {

    // If the root is NULL return 0.

    if (node == NULL)   {
        return 0;
    }

    // Calculate the height of the tree. By getting the height of the left and right sub trees and add them. 

    int leftHeight = BSTGetHeight(node->left);
    int rightHeight = BSTGetHeight(node->right);
    int total = 1 + leftHeight + rightHeight;
    return total;
}