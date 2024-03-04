#include <lcthw/queue.h>
#include <lcthw/dbg.h>

Queue *Queue_create(){
    return calloc(1, sizeof(Queue));
}

void Queue_destroy_node(QueueNode *node){
    if(node->next){
        Queue_destroy_node(node->next);
    }
    free(node->value);
    free(node);
    return;
}

void Queue_destroy(Queue *queue){
    if(queue->head){
        Queue_destroy_node(queue->head);
    }
    free(queue);
}

void Queue_send(Queue *queue,void *value){
    QueueNode *node = calloc(1,sizeof(QueueNode));
    check_mem(node);

    node->value = value;

    if(queue->head==NULL){
        queue->head = node;
        queue->tail = node;
    }else{
        node->next = queue->head;
        queue->head->prev=node;
        queue->head = node;
    }
    queue->count++;
error:
    return;
}

void *Queue_recv(Queue *queue){
    QueueNode *node = queue->tail;
    void *value=NULL;
    if(node){
        value=node->value;
        queue->tail=node->prev;
        if(queue->tail){
            queue->tail->next=NULL;
        }else{
            queue->head=NULL;
        }
        free(node);
        queue->count--;
    }
    
    return value;
}

void *Queue_peek(Queue *queue){
    if(queue->tail)
        return queue->tail->value;
    return NULL;
}