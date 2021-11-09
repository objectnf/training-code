#include "LinkList.h"

using namespace std;

int main()
{
    LinkList *L = construct_list();
    ElementType insertData = 100;
    insert_from_head(L, insertData);

    destroy_list(&L);
    return 0;
}
