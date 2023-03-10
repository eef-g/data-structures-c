#ifndef LIST_H

#define LIST_H
#include "node.h"
#include <stdlib.h>

// Uncomment this line for debugging (WILL ONLY WORK IN THIS ORIGINAL REPO!!!)
//#include "../tests/debug/debug_heap.h"

typedef struct List
{
    /* data */
    Nodeptr head;
    Nodeptr tail;
    int len;
} List, * Listptr;

// List Functions

// List Constructor
Listptr List_new();
void List_init(Listptr l);


void List_addValue(Listptr self, void* val, dataType type); //0
void List_printList(Listptr self); //
Nodeptr List_walkToIndex(Listptr self, int index); //
Nodeptr List_findNodebyValue(Listptr self, void* val); //
void List_insertBefore(Listptr self, int index, void* val, dataType type); //
void List_insertAfter(Listptr self, int index, void* val, dataType type); //
void List_removeAt(Listptr self, int index); //
Nodeptr List_unlinkNodebyValue(Listptr self, void* val);
void List_valueSort(Listptr self); //
void List_addressSort(Listptr self); //
void List_clear(Listptr self); //
void List_destroy(Listptr self);

#endif
