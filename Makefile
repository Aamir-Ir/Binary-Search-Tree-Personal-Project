BST: addNewNode.o BSTInsert.o BSTRemove.o BSTSearch.o BSTGetHeight.o BSTPrintInorder.o freeBST.o menu.o main.o
	gcc -Wall -std=c99 addNewNode.o BSTInsert.o BSTRemove.o BSTSearch.o BSTGetHeight.o BSTPrintInorder.o freeBST.o menu.o main.o -o BST

addNewNode.o: addNewNode.c header.h
	gcc -Wall -std=c99 -c addNewNode.c

BSTInsert.o: BSTInsert.c header.h
	gcc -Wall -std=c99 -c BSTInsert.c

BSTRemove.o: BSTRemove.c header.h
	gcc -Wall -std=c99 -c BSTRemove.c

BSTSearch.o: BSTSearch.c header.h
	gcc -Wall -std=c99 -c BSTSearch.c

BSTGetHeight.o: BSTGetHeight.c header.h
	gcc -Wall -std=c99 -c BSTGetHeight.c

BSTPrintInorder.o: BSTPrintInorder.c header.h
	gcc -Wall -std=c99 -c BSTPrintInorder.c

freeBST.o: freeBST.c header.h
	gcc -Wall -std=c99 -c freeBST.c

menu.o: menu.c header.h
	gcc -Wall -std=c99 -c menu.c

main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c

clean:
	rm *.o BST
