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
	int z;
        x = ask_user_for_integer("pierwsza liczba: ");
        y = ask_user_for_integer("druga liczba: ");
	z = ask_user_for_integer("trzecia liczba: ");

        if (y > x && z < y)
        {
        std::cout << y <<endl;
	}

        if (x > y && x > z)
        {
        std::cout << x <<endl;
        }

        if (x < z && z > y)
	{
        std::cout << z <<endl;
	}


        return 0;


}


