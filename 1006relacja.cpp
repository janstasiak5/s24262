# include <iostream>
# include <string>
# include <cmath>
using namespace::std;
int ask_user_for_integer(std :: string const prompt)
{
        if ( not prompt . empty ()) {
        std :: cout << prompt ;
}
        auto value = std :: string {};
        std :: getline (std :: cin , value);
        return std :: stoi (value);
}
using namespace::std;
int main ()
{
        int y;
	int x;
	x = ask_user_for_integer("pierwsza liczba: ");
	y = ask_user_for_integer("druga liczba: ");

	if (x > y)
	{
	std::cout << x;
	std::cout << ">";
	std::cout <<  y<<endl;
	}


	if (x < y)
	{
	std::cout << x;
	std::cout << "<";
	std::cout <<  y<<endl;
	}


	if (x == y)
	{
	std::cout << x;
	std::cout << "=";
	std::cout << y;
	}

        return 0;


}



