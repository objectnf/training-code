#include "StaticList.hpp"

void InitList(SqList &L)
{
    L.data = new ElementType[INITSIZE];
    L.size = INITSIZE;
    L.length = 0;
}

void DestroyList(SqList &L)
{
    delete []L.data;
    // 其他变量无法删除
}
