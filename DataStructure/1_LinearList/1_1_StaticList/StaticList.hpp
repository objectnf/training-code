#ifndef STATICLIST_HPP_INCLUDED
#define STATICLIST_HPP_INCLUDED

#include <iostream>
#include <cstdlib>

#define INITSIZE 10

typedef int ElementType;
typedef struct
{
    ElementType *data;
    int size;
    int length;
} SqList;

void InitList(SqList &L);
void DestroyList(SqList &L);


#endif // STATICLIST_HPP_INCLUDED
