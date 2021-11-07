#include <iostream>
using namespace::std;
int main()
{
    int x,y;
    int o=1;
    cout<<"silnia"<<endl;
    cout<<"Podaj liczbe"<<endl;
    cout<<"|> ";
    cin>>x;
    for(y=1;y<=x;y++){
    o*= y;
    }
    cout<<"silnia wynosi: "<<o;

        return 0;

}
