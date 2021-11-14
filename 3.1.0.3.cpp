#include <iostream>
#include <ctime>
using namespace::std;
int main()
{
    int k;
    int i;
    int o = 0;
    cout<<" Podaj zakres liczby k: "<<endl;
    cout<<">> ";
    cin>>k;
    int A[50];
    for(int i =0;i< 50; i++)
        A[i]=rand()%k+1;

    for(int i=0; i<50;i++)
    cout<<A[i]<<endl;
    return 0;
}
