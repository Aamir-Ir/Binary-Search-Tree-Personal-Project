# include "header.h"

/*
    This function is used to search the Binary Search Tree.
*/

bool BSTSearch(BST * root, int key) {
    BST * cur = root;

    // Keep track of the cur node until it is NULL.

    while (cur != NULL) {

        // Case 1: The node is containing the data is found return true.

        if (key == cur->data)   {
            return true;
        }

        // Case 2: The node is containing the data is greater than the key so travese the left sub tree.

        else if (key < cur->data)   {
            cur = cur->left;
        }
        
        // Case 3: The node is containing the data is less than the key so traverse the right sub tree.

        else    {
            cur = cur->right;
        }
    }
    return false;
}