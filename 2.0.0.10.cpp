#include <iostream>
using namespace::std;
int main()
{
    int x,y=1;
    int o=1;
    cout<<"silnia"<<endl;
    cout<<"Podaj liczbe"<<endl;
    cout<<"|> ";
    cin>>x;
    do{
    o*= y;
    y++;

    }while(y<=x);
    cout<<"silnia wynosi: "<<o;

        return 0;

}
