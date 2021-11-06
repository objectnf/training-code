#ifndef STATICLIST_H_INCLUDED
#define STATICLIST_H_INCLUDED

#include <iostream>

#define INITSIZE 10

typedef int ElementType;
typedef struct SqListStruct
{
    ElementType *data;
    int size;
    int length;
} SqList;

SqList* init_list();
void destroy_list(SqList **sqList);
bool check_list_empty(SqList *sqList);

int get_list_length(SqList *sqList);

#endif // STATICLIST_H_INCLUDED
