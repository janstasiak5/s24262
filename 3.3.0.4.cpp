#include <iostream>
#include <vector>
using namespace::std;
int main ()
{
    int a,b,c;
    cout<<"wielkosc tablicy: ";
    cin >> a;
    std::vector<int> array(a);
    double x;
    for(int i=0; i < array.size(); i++)
    {
        cout<<"A["<<i<<"]-> ";
        cin>> b;
        x=x+b;

    }
    float srednia;
    srednia=x / a;
    cout<<"srednia : "<<srednia<<endl;
    return 0;
}
