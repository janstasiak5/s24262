#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj ilosc stopni: " ;
    int o;
    cin>>o;
    for(int i=1;i<=o;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }cout<<endl;
    }



    return 0;
}
