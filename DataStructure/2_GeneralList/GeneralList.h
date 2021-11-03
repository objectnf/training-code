#ifndef GENERALLIST_H_INCLUDED
#define GENERALLIST_H_INCLUDED

#include <iostream>

#define ElementType int

// 按一般考试要求，推荐显式设置别名
typedef struct Node {
    bool type;
    Node *next;
    union {
        ElementType atom;
        Node *nodePointer;
    }
    nodeContent;
}
NodeType;

typedef struct List {
    int length;
    Node *head;
}
ListType;

int construct_list(ListType **list);
bool check_list_empty(const ListType *list);
int destroy_list(ListType **list);
int get_list_length(const ListType *list);

#endif // GENERALLIST_H_INCLUDED
