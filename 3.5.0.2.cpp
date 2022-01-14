#include <iostream>
using namespace std;
 
double fSum(double (*f)(double), int n, int m) {
	double suma = 0;
	for(int i = n; i <= m; i++) {
		suma += f((double) i);
	}
	return suma;
}
 
double f (double arg) {
	return 2 * arg + 1;
}
 
int main() {
	int n = 50;
	int m = 100;
 
	cout
		<< "n: " << n << ", " << endl
		<< "m: " << m << ", " << endl
		<< "wynik: " << fSum(f, n, m);
 
	return 0;
}