#include <iostream>

using namespace std;

void functionXY(int &a, int &b) {
    a = 2 * a;
    b = b + 100;
}

int main()
{
    int a, b;
    cout << "Podaj liczbe ktora ma zostac zwiekszona dwukrotnie" << endl;
    cin >> a;
    cout << "Podaj liczbe ktora ma zostac zwiekszona o sto" << endl;
    cin >> b;

    functionXY(a, b);

    cout << "Wynik: A = " << a << ", B = " << b << endl;
    return 0;
}
