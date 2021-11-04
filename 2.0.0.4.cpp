#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"podaj liczbe: ";
    cin>>x;
    for(y=2;y*y<=x;y++)
    if((x%y)==0){
    cout<<x<<" nie jest liczba pierwsza"<<endl;
    return 0;}
    if(x<=2)
    cout<<x <<" jest liczba pierwsza"<<endl;
    else
    cout <<x<< " jest liczba pierwsza"<<endl;
    return 0;
}
