#ifndef STACK_H

#define STACK_H
#include <stdio.h>
#include<stdlib.h>
#include "list.h"

typedef struct Stack
{
    Listptr Stack_Backend;

} Stack, *Stackptr;


Stackptr Stack_new(); //
void Stack_init(Stackptr s); //
void Stack_Push(Stackptr self, void* val, dataType type); //
void* Stack_Pop(Stackptr self); //
void* Stack_findNodebyValue(Stackptr self, void* val); //
void Stack_Print(Stackptr self); //

#endif
