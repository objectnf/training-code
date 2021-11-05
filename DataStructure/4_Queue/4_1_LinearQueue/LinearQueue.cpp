#include "LinearQueue.h"

// ����
Queue* construct_queue()
{
    Queue *linearQueue = new Queue{{0}, 0, 0};
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
    if (linearQueue->length == 0) {
        return true;
    }
    return false;
}

// ����
bool check_queue_full(Queue *linearQueue)
{
    if (linearQueue->head == linearQueue->tail) {
        return true;
    }
    return false;
}

// ��ȡ��ͷԪ��
int get_top_element(Queue *linearQueue, ElementType *head)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    *head = linearQueue->data[linearQueue->head];
    return 0;
}

// β���
int push_element(Queue *linearQueue, ElementType data)
{
    if (check_queue_full(linearQueue)) {
        return -1;
    }
    linearQueue->data[linearQueue->tail] = data;
    linearQueue->tail ++;
    return 0;
}

// ͷ����
int pop_element(Queue *linearQueue, ElementType *head)
{
    if (check_queue_empty(linearQueue)) {
        return -1;
    }
    *head = linearQueue->data[linearQueue->head];
    linearQueue->head = (linearQueue->head + 1) % MAX_QUEUE_SIZE;
    return 0;
}
