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


#endif // STATICLIST_H_INCLUDED
