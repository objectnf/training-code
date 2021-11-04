#include "GeneralList.h"

// ��һ�㿼��Ҫ�󣬺���const��const_cast���쳣����ȣ���������������
// ����
void construct_list(ListType **gList)
{
    *gList = new ListType{0, nullptr};
    return;
}

// �п�
bool check_list_empty(ListType *gList)
{
    if (gList->length == 0) {
        return true;
    }
    return false;
}

// ����
void destroy_list(ListType **gList)
{
    delete *gList;
    return;
}

// �󳤶�
int get_list_length(ListType *gList)
{
    return gList->length;
}

// �ӱ�ͷ����
void add_element_to_head(ListType *gList, int isAtom, void *nodeData)
{
    NodeType *node = new NodeType();
    // ��ԭ���
    if (isAtom) {
        node->type = false;
        node->nodeContent.atom = *(int *)nodeData;
    }
    // ���ӱ�
    else {
        node->type = true;
        node->nodeContent.nodePointer = (NodeType *)nodeData;
    }
    node->next = gList->head;
    gList->head = node;
    gList->length ++;
    return;
}

// ȡ��ͷ
NodeType* get_list_head(ListType *gList)
{
    return gList->head;
}

// ȡ��β
ListType* get_list_tail(ListType *gList)
{
    ListType *newList = new ListType{0, nullptr};
    // �ձ�
    if (check_list_empty(gList)) {
        return newList;
    }
    newList->head = gList->head->next;
    newList->length = gList->length - 1;
    return newList;
}

// �ӱ�ͷɾ��
void delete_element_from_head();

// �����
int get_list_depth();

// ����
void traverse_list();

