#include "GeneralList.h"

using namespace std;

int main()
{
    ListType* List = nullptr;
    int err = 0;
    err = construct_list(&List);
    if (err) {
        cout << "广义表初始化错误"<<endl;
        return 1;
    }
    else {
        cout << "广义表初始化成功" << endl;
    }


    return 0;
}
