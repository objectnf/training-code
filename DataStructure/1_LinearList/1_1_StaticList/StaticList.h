#ifndef STATICLIST_H_INCLUDED
#define STATICLIST_H_INCLUDED

#include <iostream>
// #include <algorithm>
#include <cstring>

#define INITSIZE 10

typedef int ElementType;
typedef struct SqListStruct
{
    ElementType *data;
    int size;
    int length;
} SqList;

/* 标准操作 */
SqList* init_list();
void destroy_list(SqList **sqList);
bool check_list_empty(SqList *sqList);
bool check_list_full(SqList *sqList);
int insert_element(SqList *sqList, ElementType data);
int delete_element(SqList *sqList, int pos);
int search_by_position(SqList *sqList, int pos, ElementType *data);
int search_by_value(SqList *sqList, ElementType data, int *pos);
int expand_list(SqList *sqList, int length);

/* 非标准操作 */
int get_list_length(SqList *sqList);
void print_list(SqList *sqList);
int get_list_size(SqList *sqList);

#endif // STATICLIST_H_INCLUDED
