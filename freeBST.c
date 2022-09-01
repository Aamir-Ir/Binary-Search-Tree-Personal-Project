# include "header.h"

/*
    This function is used to free all the nodes in the HEAP that we have created and stored on the HEAP using the malloc function.
    This is possible using the BST traversal algorithm which gives us access to all the nodes that we have allocated on the HEAP 
    as the root pointer points to the the left and right sub trees therefore every node can be traversed by using the root pointer
    so we can free every node on the HEAP. This will result in 0 memory leaks.
*/

void freeBST(BST * root)    {

    // If root is NULL do nothing.

    if (root == NULL)   {
        return;
    }     

    // Traverse the tree and free all nodes of the HEAP.

    freeBST(root->left);
    freeBST(root->right);
    free(root);
}