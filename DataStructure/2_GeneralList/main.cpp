#include "GeneralList.h"

using namespace std;

int main()
{
    ListType* gList = nullptr;
    int err = 0;
    err = construct_list(&gList);
    if (err) {
        cout << "������ʼ������"<<endl;
        return 1;
    }
    else {
        cout << "������ʼ���ɹ�" << endl;
    }

    err = destroy_list(&gList);
    if (err) {
        cout << "���������ʧ��" << endl;
        return 1;
    }
    else {
        cout << "��������ٳɹ�" << endl;
    }
    return 0;
}
