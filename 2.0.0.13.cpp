#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj ilosc stopni: " ;
    int o;
    cin>>o;
    for(int i=o;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }cout<<endl;
    }



    return 0;
}
