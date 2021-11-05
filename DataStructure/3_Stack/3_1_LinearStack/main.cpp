#include "LinearStack.h"

using namespace std;

int main()
{
    Stack *linearStack = construct_stack();
    bool isStackEmpty = check_stack_empty(linearStack);

    destroy_stack(&linearStack);
    return 0;
}
