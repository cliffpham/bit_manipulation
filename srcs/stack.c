#include "../includes/stack.h"

c_stack *create_stack( unsigned capacity ) 
{ 
//allocate memory for a dynamic array that represents the stack
    c_stack *stack = (c_stack*)malloc(sizeof(c_stack)); 
  
    if (!stack)  
        return (NULL); 
//foo->bar is equivalent to (*foo).bar, i.e. 
//it gets the member called bar from the struct that foo points to.  
    stack->top = -1; 
    stack->capacity = capacity; 
//array that represents index values?  
    stack->array = (int*) malloc(stack->capacity * sizeof(int)); 
  
    if (!stack->array) 
        return (NULL); 
    return (stack); 
} 

int is_empty(c_stack *stack) 
{ 
    return (stack->top == -1); 
}
// peek is used to reference/ observe what is at the top of the stack
// for instance to determine whether to pop an element or not
char peek(c_stack *stack) 
{ 
    return (stack->array[stack->top]); 
}

char pop(c_stack *stack) 
{ 
// if stack is not empty refer to the last item pushed onto the stack
    if (!is_empty(stack)) 
        return (stack->array[stack->top--]); 
    return ('$'); 
}

void push(c_stack *stack, char op) 
{ 
// add last item onto the stack
    stack->array[++stack->top] = op; 
} 

