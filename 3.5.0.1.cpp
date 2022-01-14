#include <iostream>
using namespace std;
 
auto call_with_random_int(void (*fp)(int const)) -> void {
	fp(rand()%101);
}
 
void print_value(int const value) {
	cout << value;
}
 
int main() {
  srand((unsigned)time(0));
 
  call_with_random_int(print_value);
 
  return 0;
}