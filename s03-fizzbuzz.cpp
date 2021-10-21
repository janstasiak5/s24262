#include <iostream>
#include <string>
#include <sstream>
#include <locale>

using namespace::std;


int main ()
{
	int x;
	int y;
	cout <<"Podaj liczbe: ";
	cin >> y; 
	for (x=1; x<=y; x++){
	if ((x % 15) == 0)

	cout << x << " fizzbuzz" <<endl;
	else if ((x % 5) == 0)
	cout << x << " buzz" <<endl;
	else if ((x % 3) == 0)
	cout << x << " fizz" <<endl;
	else
	cout << x <<endl;
	}
	return 0;


}
