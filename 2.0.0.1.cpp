#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "podaj dwie liczby a i b (pamietaj, ze a < b)"<<endl;
    cout << "podaj a: " ;
    cin>> a;
    cout << "podaj b: " ;
    cin>> b;
    if(a>b){
        cout <<"Blad"<<endl;
        cout <<"a MUSI byc mniejsze od b"<<endl;
        return 0;}
    cout << "Lista liczb wiekszych lub rownych a i mniejszych od b: ";


    while(b>=a){
        cout << a <<" ";
        a++;
    }



    return 0;
}