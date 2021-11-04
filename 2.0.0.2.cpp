#include <iostream>

using namespace std;

int main()
{
    int a, b, c, y;
    cout << "podaj trzy liczby a, b i c (pamietaj, ze a < b oraz c nie moze byc rowne 0)"<<endl;
    cout << "podaj a: " ;
    cin>> a;
    cout << "podaj b: " ;
    cin>> b;
    cout << "podaj c: " ;
    cin>> c;
    if(a>b){
        cout<<"a nie moze byc wieksze od b" <<endl;
        return 0;
    }else
    cout << "Lista liczb wiekszych lub rownych a i mniejszych od b: " <<endl;


    while(b>=a){
        cout << a <<" "<<endl;
        a++;
    }
    if(c==0){
        cout<<"c nie moze byc 0"<<endl;
    return 0;
    }else
    cout << "Lista liczb podzielnych przez c:" <<endl;
    for(y=1;y<=c;y++)
    {
        if ((c%y)==0)
    cout<<y<<endl;
    }



    return 0;
}
