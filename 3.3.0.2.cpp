
#include <iostream>
#include <cmath>
using namespace::std;
int main()
{
	double h,r,l;
	int y;
	for (int i=0;i<y;i++)
	{
	cout<<"podaj h: ";
        cin>>h;
        cout<<"podaj R: ";
        cin>>r;
        cout<<"podaj r: ";
       	cin>>l;
	double o=0.33333333*M_PI *h;
	double p=r*r+r*l+l*l;
	cout<<"pojemnosc: "<<o*p<<endl;
}	return 0;
}
