#include "LinearQueue.h"

// 循环队列
// 创建
Queue* construct_queue()
{
    Queue *linearQueue = new Queue{{0}, 0, 0, 0};
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
    if (linearQueue->length == 0) {
        return true;
    }
    return false;
}

// 判满
bool check_queue_full(Queue *linearQueue)
{
    if (linearQueue->head == linearQueue->tail && linearQueue->length != 0) {
        return true;
    }
    return false;
}

// 获取队头元素
int get_head_element(Queue *linearQueue, ElementType *head)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    *head = linearQueue->data[linearQueue->head];
    return 0;
}

// 尾入队
int push_element(Queue *linearQueue, ElementType data)
{
    if (check_queue_full(linearQueue)) {
        return -1;
    }
    linearQueue->data[linearQueue->tail] = data;
    linearQueue->tail = (linearQueue->tail + 1) % MAX_QUEUE_SIZE;
    linearQueue->length ++;
    return 0;
}

// 头出队
int pop_element(Queue *linearQueue, ElementType *head)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    *head = linearQueue->data[linearQueue->head];
    linearQueue->head = (linearQueue->head + 1) % MAX_QUEUE_SIZE;
    linearQueue->length --;
    return 0;
}

// 非标准：获取队列长度
int get_queue_length(Queue *linearQueue)
{
    return linearQueue->length;
}
