#include "LinkList.h"

/* 链表构造 */
LinkList* construct_list()
{
    LinkList *newList = new LinkList{0, nullptr};
    return newList;
}

/* 非标准：直接获取链表长度 */
int get_list_length_direct(LinkList *L)
{
    return L->length;
}

/* 销毁链表 */
void destroy_list(LinkList **L)
{
    Node *currentNode = (*L)->next;
    while (currentNode) {
        Node *temp = currentNode;
        currentNode = currentNode->next;
        delete temp;
    }
    delete *L;
    return;
}

/* 从头插入 */
void insert_from_head(LinkList *L, ElementType data)
{
    Node *newNode = new Node{data, L->next};
    L->next = newNode;
    L->length++;
    return;
}

/* 从尾插入 */
void insert_from_tail(LinkList *L, ElementType data)
{
    Node *newNode = new Node{data, nullptr};
    if (L->next == nullptr) {
        L->next = newNode;
        return;
    }

    Node *currentNode = L->next;
    while (currentNode->next) {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
    return;
}

/* 获取链表长度 */
int get_list_length(LinkList *L)
{
    Node *currentNode = L->next;
    int length = 0;
    while(currentNode) {
        length++;
        currentNode = currentNode->next;
    }
    return length;
}

/* 遍历链表并输出 */
void traverse_list(LinkList *L)
{
    Node *currentNode = L->next;
    while (currentNode) {
        std::cout << currentNode->data << " ";
        currentNode = currentNode->next;
    }
    std::cout << std::endl;
    return;
}


/* 指定位置插入，位置从1开始，下同 */

/* 指定位置删除 */

/* 按位置查找 */
int get_element_by_position(LinkList *L, int pos, ElementType *data)
{
    Node *currentNode = L->next;
    for(int i=2; i<=pos; i++) {
        currentNode = currentNode->next;
        if(currentNode == nullptr) {
            break;
        }
    }
    if (currentNode == nullptr) {
        return 1;
    }
    else {
        *data = currentNode->data;
        return 0;
    }
}

/* 按值查找 */

/* 在指定结点前插入 */

/* 在指定结点后插入 */

/* 删除指定结点 */

