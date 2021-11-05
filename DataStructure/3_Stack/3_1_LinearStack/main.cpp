#include "LinearStack.h"

using namespace std;

int main()
{
    Stack *linearStack = construct_stack();

    ElementType pushData = 10;
    int err = 0;

    err = push_element(linearStack, pushData);
    if (err) {
        cout << "元素插入失败" << endl;
    }

    ElementType topData = 0;
    err = get_top_element(linearStack, &topData);
    if (err) {
        cout << "获取栈顶元素失败" << endl;
    }
    else {
        cout << "栈顶元素为：" << topData << endl;
    }

    bool isStackEmpty = check_stack_empty(linearStack);
    if (isStackEmpty) {
        cout << "此时栈空" << endl;
    }
    else {
        cout << "此时栈非空" << endl;
    }

    err = pop_element(linearStack, &topData);
    isStackEmpty = check_stack_empty(linearStack);
    if (isStackEmpty) {
        cout << "此时栈空" << endl;
    }
    else {
        cout << "此时栈非空" << endl;
    }

    destroy_stack(&linearStack);
    return 0;
}
