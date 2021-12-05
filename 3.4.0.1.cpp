#include <iostream>
#include <string>
using namespace::std;
int main()

{
    string name="Jan Stasiak";
    string *wsk_name;
    wsk_name = & name;
    cout<<"imie : "<< name <<endl;
    cout<<"wsk_name: "<<*wsk_name<<endl;
    cout<<"Adres: "<< &name<<endl;
    cout<<"wsk_name: "<<wsk_name<<endl;
    cout<<"dlugosc: "<<name.length()<<endl;
    cout<<"wsk_name: "<<sizeof &name<<endl;
    return 0;
}
