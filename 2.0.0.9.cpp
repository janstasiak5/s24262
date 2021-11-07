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
    while(y<=x){
    o*= y;
    y++;

    }
    cout<<"silnia wynosi: "<<o;

        return 0;

}
