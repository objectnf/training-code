#include "GeneralList.h"

// ��һ�㿼��Ҫ�󣬺���const��const_cast����������������
int construct_list(ListType **gList)
{
    *gList = new ListType{0, nullptr};
    return 0;
}

bool check_list_empty(ListType *gList)
{
    if (gList->length == 0) {
        return true;
    }
    return false;
}

int destroy_list(ListType **gList)
{
    delete *gList;
    return 0;
}

int get_list_length(ListType *gList)
{
    return gList->length;
}

int add_element_to_head(ListType **gList, int isAtom, void *nodeData)
{
    NodeType *node = new NodeType();
    if (isAtom) {
        node->type = false;
        node->nodeContent.atom = *(int *)nodeData;
        node->next = nullptr;
    }
    else {
        node->type = true;
        node->nodeContent.nodePointer = (NodeType *)nodeData;
        node->next = nullptr;
    }



    return 0;
}

