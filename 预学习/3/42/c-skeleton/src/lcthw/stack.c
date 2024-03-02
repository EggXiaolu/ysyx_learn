#include <lcthw/stack.h>
#include <lcthw/dbg.h>

Stack *Stack_create(){
    return calloc(1, sizeof(Stack));
}

void destroy_node(StackNode *node){
    printf("%s\n", node->value);
    if(node->next){
        destroy_node(node->next);
    }
    free(node->value);
    free(node);
    return;
}

void Stack_destroy(Stack *stack){
    if(stack->top){
        destroy_node(stack->top);
    }
    free(stack);
}

void Stack_push(Stack *stack,void *value){
    StackNode *node = calloc(1,sizeof(StackNode));
    check_mem(node);

    node->value = value;

    if(stack->top==NULL){
        stack->top = node;
    }else{
        node->next = stack->top;
        stack->top = node;
    }
    stack->count++;
error:
    return;
}

void *Stack_pop(Stack *stack){
    StackNode *node = stack->top;
    void *value=NULL;
    if(node){
        value=node->value;
        stack->top=node->next;
        free(node);
        stack->count--;
    }
    return value;
}

void *Stack_peek(Stack *stack){
    if(stack->top)
        return stack->top->value;
    return NULL;
}