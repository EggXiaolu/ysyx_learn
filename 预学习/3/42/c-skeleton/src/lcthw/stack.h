#ifndef lcthw_Stack_h
#define lcthw_Stack_h
#include <stdlib.h>

struct StackNode;

typedef struct StackNode{
    struct StackNode *next;
    void *value;
} StackNode;

typedef struct Stack{
    int count;
    StackNode *top;
}Stack;

Stack *Stack_create();
void Stack_destroy(Stack *stack);

#define Stack_count(A) ((A)->count)
#define STACK_FOREACH(L,V) for(StackNode *V = L->top; V !=NULL; V = V->next)

void Stack_push(Stack *stack, void *value);
void *Stack_pop(Stack *stack);
void *Stack_peek(Stack *stack);

#endif