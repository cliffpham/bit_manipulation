#include "../includes/stack.h"

// A utility function to check if the given character is operand
int is_operand(char ch)
{
    //(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    return (ch >= '0' && ch <= '9');
}

// A utility function to return precedence of a given operator
// Higher returned value means higher precedence
int precedent(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
    case '%':
        return 3;
    }
    return -1;
}

// The main function that converts given infix expression
// to postfix expression.
int infix_to_postfix(char *exp)
{
    int i;
    int k;

    // Create a stack of capacity equal to expression size
    c_stack *stack = create_stack(strlen(exp));
    if(!stack) // See if stack was created successfully
        return -1 ;

    for (i = 0, k = -1; exp[i]; ++i)
    {
        // If the scanned character is an operand, add it to output.
        if (is_operand(exp[i]))
            exp[++k] = exp[i];

        // If the scanned character is an ‘(‘, push it to the stack.
        else if (exp[i] == '(')
            push(stack, exp[i]);

        // If the scanned character is an ‘)’, pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (exp[i] == ')')
        {
            while (!is_empty(stack) && peek(stack) != '(')
                exp[++k] = pop(stack);
            if (!is_empty(stack) && peek(stack) != '(')
                return -1; // invalid expression
            else
                pop(stack);
        }
        else // an operator is encountered
        {
            while (!is_empty(stack) && precedent(exp[i]) <= precedent(peek(stack)))
                exp[++k] = pop(stack);
            push(stack, exp[i]);
        }
    }

    // pop all the operators from the stack
    while (!is_empty(stack))
        exp[++k] = pop(stack);

    exp[++k] = '\0';
    printf( "%s \n", exp );
    return (0);
}
