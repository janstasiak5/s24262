#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <vector>
 
using namespace::std;
 
int INDEX = 24262;
int ROW_FILTER = INDEX % 3 == 0 ? 5 : INDEX % 3;
 
bool shouldcopy(int row_num) {
  return row_num == ROW_FILTER;
}
 
int* copyTableToVector(int (*table)[8], vector<int> &vec){
	for (int column = 0; column < 8; column++) {
		vec.push_back(table[ROW_FILTER][column]);
	}
 
	return &(vec.back());
}
 
void fillTable(int (*table)[8]) {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 8; j++)	{
			table[i][j] = rand()%101;
		}
	}
}
 
 
int main()
{
  srand((unsigned)time(0)); 
 
  int tablica[100][8];
  fillTable(tablica);
 
  vector<int> vec;
  auto pointer = copyTableToVector(tablica, vec);
 
  cout << "Pointer: " << pointer << ", Value: " << *pointer;
  return 0;
}