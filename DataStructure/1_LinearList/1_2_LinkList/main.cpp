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

    Node *nodeData = nullptr;
    nodeData = get_element_by_position(L, 3);
    if (nodeData == nullptr) {
        cout << "结点不存在" << endl;
    }
    else {
        cout << "nodeData.data = " << nodeData->data << endl;
    }

    ElementType searchData = 100;
    nodeData = nullptr;
    nodeData = get_element_by_value(L, searchData);
    if (nodeData == nullptr) {
        cout << "结点不存在" << endl;
    }
    else {
        cout << "nodeData.data = " << nodeData->data << endl;
    }

    insertData = 250;
    insert_after_node(nodeData, insertData);
    traverse_list(L);

    delete_node(nodeData);
    traverse_list(L);

    destroy_list(&L);
    return 0;
}
