#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

vector<int> build_vector() {
    vector<int> result;
    int number;
    do {
        cin >> number;
        result.push_back(number);
    } while(number != 0);
    return result;
}

int main()
{
    cout << "Podaj dowolne liczby (0 przerywa petle)" << endl;
    vector<int> input = build_vector();

    int breaker = 0;
    for(auto it = input.begin(); it != input.end(); it++) {
        cout << setw(10) << *it << " ";
        if (++breaker == 5) {
            breaker = 0;
            cout << endl;
        }
    }

    return 0;
}
