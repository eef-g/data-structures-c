#include <stdio.h>
#include "../headers/queue.h"

/* Constructor */

Queueptr Queue_new()
{
    Queueptr returnedPointer = (Queueptr)malloc(sizeof(Queue));
    Queue_init(returnedPointer);
    return returnedPointer;
}

void Queue_init(Queueptr q)
{
    q->queueBackend = List_new();
}

void Queue_enqueue(Queueptr self, void* val, dataType type)
{
    List_addValue(self->queueBackend, val, type);
}

void* Queue_dequeue(Queueptr self)
{
    void* node_val = Node_getValue(self->queueBackend->head);
    int len = self->queueBackend->len;
    List_removeAt(self->queueBackend, 0);
    if(self->queueBackend->len == len)
    {
        return NULL;
    }
    else
    {
        return node_val;
    }
}

void Queue_clear(Queueptr self)
{
    List_clear(self->queueBackend);
}

void Queue_print(Queueptr self)
{
    List_printList(self->queueBackend);
}
