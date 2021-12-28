#include <iostream>

using namespace std;

int main()
{
    int a, b ,s;
    cout << "podaj dwie liczby a i b (pamietaj, ze a < b)"<<endl;
    cout<< "s : ";
    cin>>s;
    cout << "podaj a: " ;
    cin>> a;
    cout << "podaj b: " ;
    cin>> b;
    if(a>b){
        cout <<"Blad"<<endl;
        cout <<"a MUSI byc mniejsze od b"<<endl;
        return 0;}
    cout << "Lista liczb wiekszych lub rownych a i mniejszych od b: ";
    if (s==0){cout<<"blad"<<endl;
    return 0;}

    for(int i=b>=a; i<= s; i++){
        cout << a <<" ";
        a++;

    }

    return 0;
}
