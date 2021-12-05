#include <iostream>
#include <algorithm>
using namespace::std;


void sap(int &a,int &b)
{

    cout<<"przed:"<<endl;
    cout<<"a : "<<a<< ", b: "<<b<<endl;
    cout<<"po:"<<endl;
    swap(a,b);
    cout<<"a : "<<a<< ", b: "<<b<<endl;

}
int main(int a, int b)
{
    sap(a,b);
    return 0;

}
