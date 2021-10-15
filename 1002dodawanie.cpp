# include <iostream>
# include <string>
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
        int x;
	int y;
	y = ask_user_for_integer("pierwsza liczba: ");
        x = ask_user_for_integer("druga liczba: ");
        std::cout <<x + y <<endl;
        return 0;
}

