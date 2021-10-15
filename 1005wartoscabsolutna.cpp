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


int main ()
{
        int y;
        y = ask_user_for_integer("pierwsza liczba: ");
	std::cout << "abs z y = " << std::abs (y) << endl;
	return 0;
}

