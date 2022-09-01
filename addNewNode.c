# include "header.h"

/*
    This is a function used to create a new node of type BST (Binary Search Tree). The node consists of the data part and the pointer
    parts as defined in the header file. The function returns a pointer of type BST after allocating space on the HEAP for a node and
    inserting the data for the node and setting the left and right pointer to NULL. This effectively creates a newNode with the 
    required data.

    Visually ->          ______ ___
                 new--->| data | L-|---> NULL
                        |______| R-|---> NULL

    This node is then returned and pointed to by the aNode of type BST * in main which is then used to be added on to the list
    accross multiple function operations.   
                           
*/

BST * addNewNode()   {
    int num;                              // Used for input for the data part.
    BST * new = malloc(sizeof(BST));      // New pointer of type BST * recieves space on the HEAP with the malloc() function.

    // Input for the data part of the node.

    printf("Add an interger value to the BST: ");
    scanf("%d", &num);

    // Store the data in the node and set the left and right pointer of the node to NULL.

    new->data = num;
    new->left = NULL;
    new->right = NULL;

    // Return the pointer to aNode in main where the aNode of type BST * points to this newly created node.

    return new;
}