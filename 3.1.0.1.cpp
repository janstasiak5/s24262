#include <iostream>

using namespace::std;
int main()
{
    int n;
    cout<<"podaj rozmiar: ";
    cin >> n;
    if (n>100){
        cout<<" za duzo" <<endl;
        return 0;
    }
    int zera[n];
    for (int i =0;i < n; i++)
        zera[i]=0;


    return 0;
}