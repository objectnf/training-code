#include "LinearQueue.h"

using namespace std;

int main()
{
    Queue *linearQueue = construct_queue();

    ElementType pushData = 10;
    int err = 0;
    err = push_element(linearQueue, pushData);
    if (err) {
        cout << "插入元素出错" << endl;
    }

    pushData = 20;
    err = push_element(linearQueue, pushData);
    if (err) {
        cout << "插入元素出错" << endl;
    }

    bool isQueueEmpty = false;
    isQueueEmpty = check_queue_empty(linearQueue);
    if (isQueueEmpty) {
        cout << "队列为空" << endl;
    }
    else {
        cout << "队列不为空" << endl;
    }

    ElementType headData = 0;
    err = get_head_element(linearQueue, &headData);
    if (err) {
        cout << "获取队头元素失败" << endl;
    }
    else {
        cout << "队头元素为：" << headData << endl;
    }

    err = pop_element(linearQueue, &headData);
    if (err) {
        cout << "删除队头元素失败" << endl;
    }

    err = get_head_element(linearQueue, &headData);
    if (err) {
        cout << "获取队头元素失败" << endl;
    }
    else {
        cout << "队头元素为：" << headData << endl;
    }

    ElementType queueLength = get_queue_length(linearQueue);
    cout << "队列长度：" << queueLength << endl;

    destroy_queue(&linearQueue);
    return 0;
}
