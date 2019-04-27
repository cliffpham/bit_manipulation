#ifndef STACK_H
# define STACK_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct stack
{
        int top;
        unsigned capacity;
        int *array;
}
c_stack;

#endif

c_stack *create_stack(unsigned capacity);
int is_empty(c_stack *stack);
char peek(c_stack *stack);
char pop(c_stack *stack);
void push(c_stack *stack, char op);
int is_operand(char ch);
int precedent(char ch);
int infix_to_postfix(char *exp);
int count_words(char *str);

