#include "GeneralList.h"

int construct_list(ListType **list)
{
    *list = new ListType{0, nullptr};
    return 0;
}

bool check_list_empty(const ListType *list)
{
    if (list->length == 0) {
        return true;
    }
    return false;
}

int destroy_list(ListType **list)
{
    delete *list;
    return 0;
}

int get_list_length(const ListType *list)
{
    return list->length;
}

