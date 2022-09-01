# include "header.h"

/*
    A function name menu() to print the menu to reduce redundancy.
*/

int menu() {   
    int num;    // Used for input.

    // Menu for all common operations for a Binary Search Tree (BST).

    printf("\n1) Insert a value to the BST.\n");
    printf("2) Remove a value from the BST.\n");
    printf("3) Search for a value in the BST.\n");
    printf("4) Get the height of the BST.\n");
    printf("5) Print the BST.\n");
    printf("Quit: 0\n\n");
    scanf("%d", &num);

    // Return users selections.
    
    return num;
}