#include "LinearStack.h"

using namespace std;

int main()
{
    Stack *linearStack = construct_stack();

    ElementType pushData = 10;
    int err = 0;

    err = push_element(linearStack, pushData);
    if (err) {
        cout << "Ԫ�ز���ʧ��" << endl;
    }

    ElementType topData = 0;
    err = get_top_element(linearStack, &topData);
    if (err) {
        cout << "��ȡջ��Ԫ��ʧ��" << endl;
    }
    else {
        cout << "ջ��Ԫ��Ϊ��" << topData << endl;
    }

    bool isStackEmpty = check_stack_empty(linearStack);
    if (isStackEmpty) {
        cout << "��ʱջ��" << endl;
    }
    else {
        cout << "��ʱջ�ǿ�" << endl;
    }

    err = pop_element(linearStack, &topData);
    isStackEmpty = check_stack_empty(linearStack);
    if (isStackEmpty) {
        cout << "��ʱջ��" << endl;
    }
    else {
        cout << "��ʱջ�ǿ�" << endl;
    }

    destroy_stack(&linearStack);
    return 0;
}
