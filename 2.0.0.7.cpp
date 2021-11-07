#include <iostream>
using namespace::std;

int main()
{
    int x,y,z,o=0;
    cout<<"podaj 2 liczby: "<<endl;
    cout<<"limit: ";
    cin>>x;
    cout<<"dzielnik: ";
    cin>>y;
    for(z=1;z<=x;z++){
    if(z%y==0)
    o+=z;}
    cout<<"suma: " <<o<<endl;

    return 0;

}
