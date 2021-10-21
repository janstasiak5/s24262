#include <iostream>
#include <string>
using namespace::std;
int main ()
{
	string password;
	string fakeortrue;
	cout << "argument: " <<endl;
	getline(cin,password);
	do{
	cout<< "password: ";
	getline(cin,fakeortrue);
	}while (fakeortrue != password);
	cout << "ok!" <<endl;
	return 0;
}
