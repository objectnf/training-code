#include "LinearQueue.h"

// ����
Queue* construct_queue()
{
    Queue *linearQueue = new Queue{{0}, 0};
    return linearQueue;
}

// ����
void destroy_queue(Queue **linearQueue)
{
    delete *linearQueue;
    return;
}

// �п�
bool check_queue_empty(Queue *linearQueue)
{
    if (linearQueue->top) {
        return false;
    }
    return true;
}

// ����
bool check_queue_full(Queue *linearQueue)
{
    if (linearQueue->top == MAX_QUEUE_SIZE - 1) {
        return true;
    }
    return false;
}

// ��ȡջ��Ԫ��
int get_top_element(Queue *linearQueue, ElementType *top)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    *top = linearQueue->data[linearQueue->top - 1];
    return 0;
}

// ��ջ
int push_element(Queue *linearQueue, ElementType data)
{
    if (check_queue_full(linearQueue)) {
        return -1;
    }
    linearQueue->data[linearQueue->top] = data;
    linearQueue->top ++;
    return 0;
}

// ��ջ��������Ҫ�󷵻�ջ��Ԫ��
int pop_element(Queue *linearQueue, ElementType *top)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    linearQueue->top --;
    *top = linearQueue->data[linearQueue->top];
    return 0;
}
