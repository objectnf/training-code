#include "StaticList.h"

using namespace std;

int main()
{
    SqList *L = init_list();

    int err = 0;
    err = expand_list(L, 20);
    if (err) {
        cout << "表容量扩展失败" << endl;
    }

    int listSize = get_list_size(L);
    cout << "表容量为：" << listSize << endl;

    ElementType insertData = 100;
    err = insert_element(L, insertData);
    if (err) {
        cout << "插入元素失败" << endl;
    }

    int listLength = get_list_length(L);
    cout << "表长度为：" << listLength << endl;

    print_list(L);

    ElementType searchData = 0;
    err = search_by_position(L, 0, &searchData);
    if (err) {
        cout << "按位查找元素失败" << endl;
    }
    else {
        cout << "第0号元素为：" << searchData << endl;
    }

    destroy_list(&L);
    return 0;
}
