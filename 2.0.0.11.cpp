#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x,y;
    int o,u;
    string bok="*";
    cout<<"Prostokat"<<endl;
    cout<<"podaj wymiary prostokata!"<<endl;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    for(o=0;o<x;o++){
        for(u=0;u<y;u++)
        {
            cout<<bok;
        }
        cout<<endl;
    }



    return 0;
}
