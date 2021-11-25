#include <iostream>

using namespace std;

int pick_max(int a, int b) {
    return (a > b) ? a : b;
}

int pick_max_of_3(int a, int b, int c) {
    return pick_max(a, pick_max(b, c));
}

int main()
{
    int a, b, c;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> a;
    cout << "Podaj druga liczbe" << endl;
    cin >> b;
    cout << "Podaj trzecia" << endl;
    cin >> c;

    cout << "Wynik Max_2: " << pick_max(a, b) << endl;
    cout << "Wynik Max_3: " << pick_max_of_3(a, b, c) << endl;

    return 0;
}
