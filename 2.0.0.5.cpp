#include <iostream>
#include <cmath>
using namespace::std;
bool pierwsza (int a)
{
    if (a<2)
        return false;
    for(int i=2;i*i<=a;i++)
        if(a%i==0)
        return false;
    return true;
}
int main()
{
    int a,sum=0;
    cout<<"a: ";
    cin>>a;
    if(pierwsza(a))
        cout<<a<<" pierwsza"<<endl;
    else
        cout<<"nie";
    for (int p=2; p<a;p++)
        for(int j=2;j*j<=p;j++)
    {
        if (p%j==0)
            break;

        else if (j+1>sqrt(p))
sum+=p;



    }
cout<<sum<<endl;



}

