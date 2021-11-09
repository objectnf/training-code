#include "LinkList.h"

using namespace std;

int main()
{
    LinkList *L = construct_list();

    ElementType insertData = 100;
    insert_from_head(L, insertData);

    insertData = 200;
    insert_from_tail(L, insertData);

    cout << get_list_length(L) << endl;

    traverse_list(L);

    insertData = 300;
    insert_from_head(L, insertData);

    int listLength = 0;
    for_each_list_element(L, [&](Node* currentNode) { listLength ++; cout << currentNode->data << " "; });
    cout << endl << listLength << endl;

    destroy_list(&L);
    return 0;
}
