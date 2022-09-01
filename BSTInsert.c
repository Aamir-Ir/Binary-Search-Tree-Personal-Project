# include "header.h"

/*
    This function is used to get insert data into the Binary Search Tree in the correct BST order.
*/

void BSTInsert(BST ** root, BST * node)  {
    BST * currentNode;

    // Case 1: Root is NULL so assign the new node as the root.

    if (*root == NULL)   {
        *root = node;
    }

    // Case 2: Add the node to the correct position.

    else    {

        // Use a cur node to traverse the tree.

        currentNode = *root;

        while (currentNode != NULL) {
 
            // Case 1: If the data in the node is less tha the data in the currentNode.

            if (node->data < currentNode->data) {

                // Sub Case 1: If the curNode left pointer is empty assign the node that position as it is in the correct place.

                if (currentNode->left == NULL)  {
                    currentNode->left = node;
                    currentNode = NULL;
                }

                // Sub Case 2: If the curNode right pointer is not NULL keep traversing the left sub tree.

                else    {
                    currentNode = currentNode->left;
                }
            }

            // Case 2: If the data in the node is greater than the data in currentNode.

            else    {
                
                // Sub Case 1: If the curNode right pointer is empty assign the node that position as it is in the correct place. 
 
                if (currentNode->right == NULL)   {
                    currentNode->right = node;
                    currentNode = NULL;
                }

                // Sub Case 2: If the curNode right pointer is not NULL keep traversing the right sub tree.

                else    {
                    currentNode = currentNode->right;
                }
            }
        }
    }
}