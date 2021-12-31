//Napisz program, który dla tablicy A o rozmiarze n
//będzie szukać wartości zadanej przez użytkownika. Jeśli tablica
//zawiera taką wartość niech program zwróci jej indeks; w przeciwnym wypadku niech zwróci -1
#include <iostream>
#include <vector>
using namespace::std;
int main()
{
    int a,b,c;
    cout<<"wielkosc tablicy: ";
    cin >> a;
    cout<<"szukasz: ";
    cin>>c;
    std::vector<int> array(a);
    cout<< array.size()<<endl;
    for (int i =0; i < array.size();i++)
    {
        cout<<"A["<<i<<"]-> ";
        cin>> b;

    }
    if (b==c)
        {

            return b;
        }

      return -1;


}





