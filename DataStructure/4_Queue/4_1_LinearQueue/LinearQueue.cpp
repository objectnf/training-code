#include "LinearQueue.h"

// 创建
Queue* construct_queue()
{
    Queue *linearQueue = new Queue{{0}, 0};
    return linearQueue;
}

// 销毁
void destroy_queue(Queue **linearQueue)
{
    delete *linearQueue;
    return;
}

// 判空
bool check_queue_empty(Queue *linearQueue)
{
    if (linearQueue->top) {
        return false;
    }
    return true;
}

// 判满
bool check_queue_full(Queue *linearQueue)
{
    if (linearQueue->top == MAX_QUEUE_SIZE - 1) {
        return true;
    }
    return false;
}

// 获取栈顶元素
int get_top_element(Queue *linearQueue, ElementType *top)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    *top = linearQueue->data[linearQueue->top - 1];
    return 0;
}

// 入栈
int push_element(Queue *linearQueue, ElementType data)
{
    if (check_queue_full(linearQueue)) {
        return -1;
    }
    linearQueue->data[linearQueue->top] = data;
    linearQueue->top ++;
    return 0;
}

// 出栈，按考试要求返回栈顶元素
int pop_element(Queue *linearQueue, ElementType *top)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    linearQueue->top --;
    *top = linearQueue->data[linearQueue->top];
    return 0;
}
