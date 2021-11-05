#ifndef LINEARQUEUE_H_INCLUDED
#define LINEARQUEUE_H_INCLUDED

#include <iostream>

#define MAX_QUEUE_SIZE 100

typedef int ElementType;
typedef struct QueueStruct
{
    ElementType data[MAX_QUEUE_SIZE];
    int head;
    int tail;
    int length;
}
Queue;

Queue* construct_queue();
void destroy_queue(Queue **linearQueue);
bool check_queue_empty(Queue *linearQueue);
bool check_queue_full(Queue *linearQueue);
int get_top_element(Queue *linearQueue, ElementType *top);
int push_element(Queue *linearQueue, ElementType data);
int pop_element(Queue *linearQueue, ElementType *top);

#endif // LINEARQUEUE_H_INCLUDED
