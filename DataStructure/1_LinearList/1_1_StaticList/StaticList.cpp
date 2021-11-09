#include "StaticList.h"

/* 创建 */
SqList* init_list()
{
   ElementType *listData = new ElementType[INITSIZE]{0};
   SqList *newList = new SqList{listData, INITSIZE, 0};
   return newList;
}

/* 销毁 */
void destroy_list(SqList **sqList)
{
    if (sqList == nullptr || *sqList == nullptr) {
        return;
    }

    delete (*sqList)->data;
    delete *sqList;
    return;
}

/* 判空 */
bool check_list_empty(SqList *sqList)
{
    if (sqList == nullptr) {
        return true;
    }

    if (sqList->length) {
        return false;
    }
    return true;
}

/* 判满 */
bool check_list_full(SqList *sqList)
{
    if (sqList == nullptr) {
        return false;
    }

    if(sqList->length == sqList->size) {
        return true;
    }
    return false;
}

/* 插入 */
int insert_element(SqList *sqList, ElementType data)
{
    if (sqList == nullptr) {
        return 1;
    }

    if (check_list_full(sqList)) {
        return 1;
    }

    sqList->data[sqList->length] = data;
    sqList->length++;
    return 0;
}

/* 删除，pos为下标，下同 */
int delete_element(SqList *sqList, int pos)
{
    if (sqList == nullptr) {
        return 1;
    }

    /* pos不合法 */
    if (pos < 0 || pos >= sqList->length) {
        return 1;
    }
    sqList->length--;
    for(int i = pos; i < sqList->length; i++) {
        sqList->data[i + 1] = sqList->data[i];
    }
    return 0;
}

/* 按位查找 */
int search_by_position(SqList *sqList, int pos, ElementType *data)
{
    if (sqList == nullptr) {
        return 1;
    }

    /* pos不合法 */
    if (pos < 0 || pos >= sqList->length) {
        return 1;
    }

    *data = sqList->data[pos];
    return 0;
}

/* 按值查找 */
int search_by_value(SqList *sqList, ElementType data, int *pos)
{
    if (sqList == nullptr) {
        return 1;
    }

    for (int i = 0; i < sqList->length; i++) {
        if (sqList->data[i] == data) {
            *pos = i;
            return 0;
        }
    }
    return 1;
}

/* 容量扩展 */
int expand_list(SqList *sqList, int length)
{
    if (sqList == nullptr) {
        return 1;
    }

    /* 指定容量小于数据长度 */
    if (length < sqList->length) {
        return 1;
    }

    ElementType *newData = new ElementType[length]{0};
    /*
     * 考试要求：不使用std::copy
     * std::copy(sqList->data, (sqList->data) + sqList->length, newData);
     */
    memcpy(newData, sqList->data, (sqList->length) * sizeof(ElementType));
    delete sqList->data;
    sqList->data = newData;
    sqList->size = length;
    return 0;
}

/* 非标准：求表长 */
int get_list_length(SqList *sqList)
{
    if (sqList == nullptr) {
        return 0;
    }
    return sqList->length;
}

/* 非标准：遍历输出 */
void print_list(SqList *sqList)
{
    if (sqList == nullptr) {
        return;
    }

    for (int i = 0; i < sqList->length; i++) {
        std::cout << sqList->data[i] << " ";
    }
    std::cout << std::endl;
    return;
}

// 非标准：求表容量
int get_list_size(SqList *sqList)
{
    if(sqList == nullptr) {
        return 0;
    }
    return sqList->size;
}
