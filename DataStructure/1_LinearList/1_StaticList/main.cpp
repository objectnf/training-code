#include "StaticList.hpp"

using namespace std;

int main(void)
{
    SqList L;
    cout<<"初始化可变静态链表L"<<endl;
    InitList(L);





    cout<<"销毁可变静态链表L"<<endl;
    DestroyList(L);
    return 0;
}
