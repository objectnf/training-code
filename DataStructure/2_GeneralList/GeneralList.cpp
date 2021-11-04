#include "GeneralList.h"

// 按一般考试要求，忽略const、const_cast、异常处理等，有需求可自行添加
// 创建
void construct_list(ListType **gList)
{
    *gList = new ListType{0, nullptr};
    return;
}

// 判空
bool check_list_empty(ListType *gList)
{
    if (gList->length == 0) {
        return true;
    }
    return false;
}

// 销毁
void destroy_list(ListType **gList)
{
    delete *gList;
    return;
}

// 求长度
int get_list_length(ListType *gList)
{
    return gList->length;
}

// 从表头插入
void add_element_to_head(ListType *gList, int isAtom, void *nodeData)
{
    NodeType *node = new NodeType();
    // 加原子项？
    if (isAtom) {
        node->type = false;
        node->nodeContent.atom = *(int *)nodeData;
    }
    // 加子表？
    else {
        node->type = true;
        node->nodeContent.nodePointer = (NodeType *)nodeData;
    }
    node->next = gList->head;
    gList->head = node;
    gList->length ++;
    return;
}

// 取表头
NodeType* get_list_head(ListType *gList)
{
    return gList->head;
}

// 取表尾
ListType* get_list_tail(ListType *gList)
{
    ListType *newList = new ListType{0, nullptr};
    // 空表？
    if (check_list_empty(gList)) {
        return newList;
    }
    newList->head = gList->head->next;
    newList->length = gList->length - 1;
    return newList;
}

// 从表头删除
void delete_element_from_head();

// 求深度
int get_list_depth();

// 遍历
void traverse_list();

