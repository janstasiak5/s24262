#include <iostream>

using namespace std;

int main()
{
    int x,y,l;

    char tak;
    do{
    for(int i=1;i<=101;i++){


        cout<<"podaj x: ";
        cin>>x;
        cout<<"podaj y: ";
        cin>>y;

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
    cout<<"kontynuowac t/n?"<<endl;
        cin>>tak;
    }
    }while(tak != 'n');

    return 0;


}

