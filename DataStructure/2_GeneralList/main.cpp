#include "GeneralList.h"

using namespace std;

int main()
{
    ListType* gList = nullptr;
    int err = 0;
    construct_list(&gList);

    // �˴���������봦�����
    int atomData = 100;
    add_element_to_head(gList, 1, (void *)&atomData);

    destroy_list(&gList);
    return 0;
}
