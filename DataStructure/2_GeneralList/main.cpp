#include "GeneralList.h"

using namespace std;

int main()
{
    ListType* List = nullptr;
    int err = 0;
    err = construct_list(&List);
    if (err) {
        cout << "������ʼ������"<<endl;
        return 1;
    }
    else {
        cout << "������ʼ���ɹ�" << endl;
    }


    return 0;
}
