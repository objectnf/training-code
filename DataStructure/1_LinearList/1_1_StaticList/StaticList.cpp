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
int insert_element()
{

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

// 非标准：求表长
int get_list_length()
{

}

// 非标准：判空
bool check_list_empty()
{

}

// 非标准：遍历输出
void print_list()
{

}
