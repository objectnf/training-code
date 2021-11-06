#include "StaticList.h"

using namespace std;

int main()
{
    SqList *L = init_list();





    cout<<"销毁可变静态链表L"<<endl;
    destroy_list(&L);
    return 0;
}
