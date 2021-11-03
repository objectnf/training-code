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

int construct_list(ListType **gList);
bool check_list_empty(ListType *gList);
int destroy_list(ListType **gList);
int get_list_length(ListType **gList);

#endif // GENERALLIST_H_INCLUDED
