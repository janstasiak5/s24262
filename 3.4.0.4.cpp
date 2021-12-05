#include <iostream>
#include <math.h>

using namespace std;
void cone(){
    int r,h;

    cout<<"podaj promien: ";
    cin>>r;
    cout<<"podaj wysokosc: ";
    cin>>h;
    cout<<"pole podstawy : "<<3.14 * r*r<<endl;
    cout<<"objetosc: "<<(0,33333333333333333) * M_PI * r* r* h<<endl;
}

int main()
{
    cone();
}
