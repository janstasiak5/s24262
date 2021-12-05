#include <iostream>
#include <string>
using namespace::std;
void print()
{
    string name="hello, world!";
    string *wsk_name;
    wsk_name = &name;
    cout<<wsk_name<<" = "<<name<<endl;
}
int main()
{
    print();

    return 0;
}
