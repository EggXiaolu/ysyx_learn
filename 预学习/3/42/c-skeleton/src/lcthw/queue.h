#ifndef lcthw_Queue_h
#define lcthw_Queue_h
#include <stdlib.h>

struct QueueNode;

typedef struct QueueNode{
    struct QueueNode *next;
    struct QueueNode *prev;
    void *value;
} QueueNode;

typedef struct Queue{
    int count;
    QueueNode *head;
    QueueNode *tail;
}Queue;

Queue *Queue_create();
void Queue_destroy(Queue *queue);

#define Queue_count(A) ((A)->count)
#define QUEUE_FOREACH(L,V) for(QueueNode *V = L->head; V !=NULL; V = V->next)

void Queue_send(Queue *queue, void *value);
void *Queue_recv(Queue *queue);
void *Queue_peek(Queue *queue);

#endif