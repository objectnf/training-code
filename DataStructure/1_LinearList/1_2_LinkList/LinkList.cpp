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
    while (currentNode && currentNode->next) {
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

}
