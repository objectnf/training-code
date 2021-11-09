#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include <iostream>

typedef int ElementType;

/* 普通结点结构 */
typedef struct NodeStruct
{
    ElementType data;
    struct NodeStruct *next;
}
// Node, *LinkList; /* 共用数据结构示例 */
Node;

/* 头结点结构 */
typedef struct LinkStruct
{
    int length;
    Node *next;
}
LinkList;

/* 标准方法 */
LinkList* construct_list();
void destroy_list(LinkList **L);
void insert_from_head(LinkList *L, ElementType data);
void insert_from_tail(LinkList *L, ElementType data);
int get_list_length(LinkList *L);
void traverse_list(LinkList *L);
Node* get_element_by_position(LinkList *L, int pos);
Node* get_element_by_value(LinkList *L, ElementType data);
void insert_after_node(Node *node, ElementType data);
void delete_node(Node *node);

/* 非标准方法 */
int get_list_length_direct(LinkList *L);

/* 非标准：遍历模板 */
template <typename Func>
Func for_each_list_element(LinkList *L, Func f)
{
    Node *currentNode(L->next);
    while (currentNode) {
        f(currentNode);
        currentNode = currentNode->next;
    }
    return f;
}

#endif // LINKLIST_H_INCLUDED
