#include <iostream>
using namespace::std;
int main()
{
  int size, sum, array[1000];
  float average;
  cout << "podaj liczbe elementow: " <<endl;
  cin >> size;
  cout << "podaj liczby : " <<endl;
  sum = 0;
  for (auto i = 0; i < size; i++)
  {
    cin >> array[i];
    sum += array[i];
  }
  average = float(sum) / size;
  cout << "srednia: " << average << endl;
  return 0;
}
