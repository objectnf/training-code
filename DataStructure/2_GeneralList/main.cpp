#include "GeneralList.h"

using namespace std;

int main()
{
    ListType* gList = nullptr;
    int err = 0;
    err = construct_list(&gList);
    if (err) {
        cout << "广义表初始化错误"<<endl;
        return 1;
    }
    else {
        cout << "广义表初始化成功" << endl;
    }

    err = destroy_list(&gList);
    if (err) {
        cout << "广义表销毁失败" << endl;
        return 1;
    }
    else {
        cout << "广义表销毁成功" << endl;
    }
    return 0;
}
