#include<iostream>
using namespace std;
struct student
{
    int id;
    char name[10];
};
int main()
{
    student mike={123,{'m','i','k','e','\0'}};
    mike.id=20130000+mike.id;
    for(int i=0;mike.name[i]!='\0';i++)
        mike.name[i]=toupper(mike.name[i]);
    cout<<mike.id<<" "<<mike.name;
    return 0;
}
