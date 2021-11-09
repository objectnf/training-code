#ifndef LINEARSTACK_H_INCLUDED
#define LINEARSTACK_H_INCLUDED

#include <iostream>

#define MAX_STACK_SIZE 100

typedef int ElementType;
typedef struct StackStruct
{
    ElementType data[MAX_STACK_SIZE];
    int top;
}
Stack;

/* 标准操作 */
Stack* construct_stack();
void destroy_stack(Stack **linearStack);
bool check_stack_empty(Stack *linearStack);
bool check_stack_full(Stack *linearStack);
int get_top_element(Stack *linearStack, ElementType *top);
int push_element(Stack *linearStack, ElementType data);
int pop_element(Stack *linearStack, ElementType *top);

#endif // LINEARSTACK_H_INCLUDED
