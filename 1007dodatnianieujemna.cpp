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
        int x;

        x = ask_user_for_integer("liczba: ");

        if (x > 0)
        {
        std::cout << 1 <<endl;
        }


        if (x < 0)
        {
        std::cout << -1 <<endl;
        }

        if (x == 0)
        std::cout << 0 <<endl;

        return 0;


}


