#include <iostream>
using namespace::std;
void chess()
{
	int x;
	cout<<"podaj rozmiar: ";
        cin >>x;

	cout <<"--------------------"<<endl;
		for (int i=0; i<x;i++){
		for(int l=0; l<2;l++){
		cout<<"I***   ***   ***   I"<<endl;
		}for(int o=0; o<2;o++){
		cout<<"I   ***   ***   ***I"<<endl;
}		}
	cout<<"--------------------"<<endl;
}
int main ()
{

	chess();
	return 0;
}
