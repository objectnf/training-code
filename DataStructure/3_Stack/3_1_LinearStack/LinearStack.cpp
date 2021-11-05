#include "LinearStack.h"

// ����
Stack* construct_stack()
{
    Stack *linearStack = new Stack{{0}, 0};
    return linearStack;
}

// ����
void destroy_stack(Stack **linearStack)
{
    delete *linearStack;
    return;
}

// �п�
bool check_stack_empty(Stack *linearStack)
{
    if (linearStack->top) {
        return false;
    }
    return true;
}

// ����
bool check_stack_full(Stack *linearStack)
{
    if (linearStack->top == MAX_STACK_SIZE - 1) {
        return true;
    }
    return false;
}

// ��ȡջ��Ԫ��
int get_top_element(Stack *linearStack, ElementType *top)
{
    if (check_stack_empty(linearStack)) {
        return -1;
    }
    *top = linearStack->data[linearStack->top - 1];
    return 0;
}

// ��ջ
int push_element(Stack *linearStack, ElementType data)
{
    if (check_stack_full(linearStack)) {
        return -1;
    }
    linearStack->data[linearStack->top] = data;
    linearStack->top ++;
    return 0;
}

// ��ջ��������Ҫ�󷵻�ջ��Ԫ��
int pop_element(Stack *linearStack, ElementType *top)
{
    if (check_stack_empty(linearStack)) {
        return -1;
    }
    linearStack->top --;
    *top = linearStack->data[linearStack->top];
    return 0;
}

