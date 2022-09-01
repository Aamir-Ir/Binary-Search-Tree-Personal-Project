# include "header.h"

bool BSTRemove(BST ** root, int key) {
    int successorData;
    BST * par = NULL;
    BST * cur = *root;

    // Use cur to travrse the tree while searching for the node.

    while (cur != NULL) {

        // Case 1: If the node is found.

        if (cur->data == key)   {

            // Sub Case 1: Remove the leaf node.

            if ((cur->left == NULL) && (cur->right == NULL))    {
                
                // The node is the root.

                if (par == NULL)    {
                    *root = NULL;
                }

                // The node is not the root.
                 
                else if (par->left == cur)  {
                    par->left = NULL;
                }
                else    {
                    par->right = NULL;
                }
            }

            // Sub Case 2: Remove node with only left child.

            else if (cur->right == NULL)  {
                
                // The node is the root.

                if (par == NULL)    {
                    *root = cur->left;
                }
                
                // The node is not the root.

                else if (par->left == cur)  {
                    par->left = cur->left;
                }
                else    {
                    par->right = cur->left;
                }
            }

            // Sub Case 3: Remove node with only right child.

            else if (cur->left == NULL) {
                
                // The node is the root.
                
                if (par == NULL)    {
                    *root = cur->right;
                }

                // The node is not the root.

                else if (par->left == cur)  {
                    par->left = cur->right;
                }
                else{
                    par->right = cur->right;
                }
            }
            else    {
                
                // Find successor (leftmost child of right subtree)
                
                BST * suc = cur->right;

                while (suc->left != NULL)    {
                    suc = suc->left;
                } 

                // Remove successor and captrue suc data.

                successorData = suc->data;
                BSTRemove(root, suc->data);
                cur->data = successorData;
            }

            // Node found and removed.

            return true;
        }

        // Case 2: // Search right sub tree. 

        else if (cur->data < key)   {
            par = cur;
            cur = cur->right;           
        }

        // Case 3: Search left sub tree.

        else    {                       
            par = cur;
            cur = cur->left;
        }
    }

    // Node not found.

    return false;
}