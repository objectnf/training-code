#include "LinearStack.h"

// 创建
Stack* construct_stack()
{
    Stack *linearStack = new Stack{{0}, 0};
    return linearStack;
}

// 销毁
void destroy_stack(Stack **linearStack)
{
    delete *linearStack;
    return;
}

// 判空
bool check_stack_empty(Stack *linearStack)
{
    if (linearStack->top) {
        return false;
    }
    return true;
}

// 判满
bool check_stack_full(Stack *linearStack)
{
    if (linearStack->top == MAX_STACK_SIZE - 1) {
        return true;
    }
    return false;
}

// 获取栈顶元素
int get_top_element(Stack *linearStack, ElementType *top)
{
    if (check_stack_empty(linearStack)) {
        return 1;
    }
    *top = linearStack->data[linearStack->top - 1];
    return 0;
}

// 入栈
int push_element(Stack *linearStack, ElementType data)
{
    if (check_stack_full(linearStack)) {
        return 1;
    }
    linearStack->data[linearStack->top] = data;
    linearStack->top++;
    return 0;
}

// 出栈，按考试要求返回栈顶元素
int pop_element(Stack *linearStack, ElementType *top)
{
    if (check_stack_empty(linearStack)) {
        return 1;
    }
    linearStack->top--;
    *top = linearStack->data[linearStack->top];
    return 0;
}

