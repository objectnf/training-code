#include "StaticList.h"

SqList* init_list()
{
   ElementType *listData = new ElementType[INITSIZE];
   SqList *newList = new SqList{listData, INITSIZE, 0};
   return newList;
}

void destroy_list(SqList **sqList)
{
    delete (*sqList)->data;
    delete *sqList;
    return;
}

// 插入
int insert_element(SqList *sqList, ElementType data)
{
    if (check_list_full(sqList)) {
        return -1;
    }

    sqList->data[sqList->length] = data;
    sqList->length ++;
    return 0;
}

// 删除
int delete_element()
{

}

// 按位查找
int search_by_position()
{

}

// 按值查找
int search_by_value()
{

}

// 长度扩展
int expand_list()
{

}

// 判空
bool check_list_empty(SqList *sqList)
{
    if (sqList->length) {
        return false;
    }
    return true;
}

// 判满
bool check_list_full(SqList *sqList)
{
    if(sqList->length == sqList->size) {
        return true;
    }
    return false;
}

// 非标准：求表长
int get_list_length(SqList *sqList)
{
    return sqList->length;
}

// 非标准：遍历输出
void print_list()
{

}
