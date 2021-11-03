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

void construct_list(ListType **gList);
bool check_list_empty(ListType *gList);
void destroy_list(ListType **gList);
int get_list_length(ListType **gList);
void add_element_to_head(ListType *gList, int isAtom, void *nodeData);
NodeType* get_list_head(ListType *gList);

#endif // GENERALLIST_H_INCLUDED
