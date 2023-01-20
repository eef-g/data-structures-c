// Author: Ethan Gray
// Purpose: Implementation of all the methods in the 'node.h' file

#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


/* Constructor Functions */
Nodeptr Node_new(void* val, dataType type)
{
    Nodeptr n = (Nodeptr)malloc(sizeof(Node));
    Node_init(n, val, type);
    return n;
}

void Node_init(Nodeptr self, void* val, dataType type)
{
    self->val = val;
    self->type = type;
}


/* Getters & Setters */
int Node_getValue(Nodeptr self)
{
    return self->val;
}

void Node_setValue(Nodeptr self, int val)
{
    self->val = val;
}

void Node_setNext(Nodeptr self, Nodeptr next)
{
    self->next = next;
}

/* Misc Functions */
void Node_printVal(Nodeptr self)
{
    switch (self->type)
    {
    case INT:
        /* code */
        printf("%d", self->val);
        break;
    
    case STRING:
        printf("%s", self->val);
        break;
    
    case CHAR:
        printf("%c", self->val);
        break;
    
    case DOUBLE:
        double d;
        memcpy(&d, self->val, sizeof(d));
        printf("%.2f", d);
        break;
    
    default:
        break;
    }
}

/* Deconstructor */
void Node_reset(Nodeptr self) {}

void Node_destroy(Nodeptr self)
{
    if (self)
    {
        Node_reset(self);
        free(self);
    }
}
