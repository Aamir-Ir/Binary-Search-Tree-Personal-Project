# include "header.h"

int main(int argc, char * argv[])  {
    int input;                          // Keeps track of the input for the menu operations.
    int remove;                         // Keeps track of the number you are trying to remove.
    int search;                         // Keeps track of the number you are trying to search for.
    bool status;                        // Keeps track of the status of the search.
    int height;                         // Keeps track of the height of the BST.
    BST * root = NULL;                  // Keep track of the root of the BST.
    BST * aNode;                        // Keeps track of all the new nodes made.

    // Menu/Greeting.

    printf("Hello Welcome to my implementation of a hash table using linear probing. Below You will see common operations.\n");
    input = menu();

    // Run the program until the user enters 0 to end it.

    while (input != 0)    {
        
        /*
            IF the number is in range of the menu operations then the program will run the appropriate operation otherwise ask agian
            for a new integer.
        */

        if ((input >= 0) && (input <= 5))    {
            
            // Case 1: Add a new node to the correct position in the BST.

            if (input == 1) {
                aNode = addNewNode();    
                BSTInsert(&root, aNode);    
            }

            // Case 2: Remove the correct node from the BST.

            else if (input == 2)    {
                printf("What is the value you want ot remove: ");
                scanf("%d", &remove);
                status = BSTRemove(&root, remove);

                if (status == true) {
                    printf("Value was removed.\n");
                }
                else    {
                    printf("Value was not in the tree so nothing was removed.\n");
                }
            }

            // Case 3: Search for the correct node in the BST and report if the node is there or not.

            else if (input== 3)    {
                printf("What is the number you are looking for: ");
                scanf("%d", &search);
                status = BSTSearch(root, search);

                if (status == true) {
                    printf("Match Found.\n");
                }
                else    {
                    printf("Match Not Found.\n");
                }
            }

            // Case 5: Get the height of the BST.

            else if (input == 4)    {
                height = BSTGetHeight(root);
                printf("The height of the tree is: %d", height);
            }

            // Case 6: Print the BST.

            else if (input == 5)    {
                printf("\n");
                BSTPrintInorder(root);                 
            }

            printf("\nPrevious Operation complete.\n");
            input = menu();
        }

        // Invalid integer input ask the user for another integer.

        else{

            // Error Handling for incorrect integer.

            printf("Invalid input please try again.\n");
            input = menu();
        }
    }

    // Free the nodes from the BST so there are no memory leaks in the program.

    freeBST(root);

    return 1;
}
