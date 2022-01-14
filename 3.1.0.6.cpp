#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace::std;
int main()
{
    int a,b,c;
    cout<<"wielkosc tablicy: ";
    cin >> a;
    cout<<"szukasz: ";
    cin>>c;
    std::vector<int> array(a);
	for (int i= 0; i<array.size();i++)
	{
		array.at(i) = rand()%101;
	}
    cout<< array.size()<<endl;
    for (int i =0; i < array.size();i++)
    {
	

        if (c==array.at(i))
	{
		cout<<"found ";
	return c;
	}

    }
	cout<<"not found";
      return -1;


}

