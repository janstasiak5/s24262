#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool is_winning(int current, int goal) {
    if (current > goal) {
        cout << "Zbyt duża!" << endl;
        return false;
    } else if (current < goal) {
        cout << "Zbyt mała!" << endl;
        return false;
    } else {
        return true;
    }
}

int main()
{
    srand(time(0));
    int goal = rand() % 101;
    int current = -1; // never below zero

    cout << "Zgadnij numerek" << endl;

    do {
        cout << "Podaj liczbe pomiedzy 1 a 100 : " << endl;
        cin >> current;
    } while (!is_winning(current, goal));

    cout << "Brawo " << goal << " to poprawna liczba"  << endl;

    return 0;
}
