#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int randomowa, zgadywana;
	srand(time(0));
	randomowa = rand()%101;
	cout << "Zgadnij numerek" <<endl;
	do
	{
		cout << "Podaj liczbe pomiedzy 1 a 100 : " <<endl;
		cin >> zgadywana;
		if (zgadywana > randomowa)
			cout << "Za dalekoooo!!!" <<endl;
		else if (zgadywana < randomowa)
			cout << "Za blisko!!!" <<endl;
		else
			cout << "Brawo, poprawna liczba to  " << randomowa <<endl;
	} while (zgadywana != randomowa);

	return 0;
}

