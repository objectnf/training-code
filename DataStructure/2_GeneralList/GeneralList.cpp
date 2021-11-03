#include "GeneralList.h"

// 按一般考试要求，忽略const、const_cast、异常处理等，有需求可自行添加
void construct_list(ListType **gList)
{
    *gList = new ListType{0, nullptr};
    return;
}

bool check_list_empty(ListType *gList)
{
    if (gList->length == 0) {
        return true;
    }
    return false;
}

void destroy_list(ListType **gList)
{
    delete *gList;
    return;
}

int get_list_length(ListType *gList)
{
    return gList->length;
}

void add_element_to_head(ListType *gList, int isAtom, void *nodeData)
{
    NodeType *node = new NodeType();
    if (isAtom) {
        node->type = false;
        node->nodeContent.atom = *(int *)nodeData;
    }
    else {
        node->type = true;
        node->nodeContent.nodePointer = (NodeType *)nodeData;
    }
    node->next = gList->head;
    gList->head = node;
    gList->length ++;
    return;
}

NodeType* get_list_head(ListType *gList)
{
    return gList->head;
}



