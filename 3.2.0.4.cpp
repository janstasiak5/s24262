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

void bubble_sort(vector<int> &input) {
    int i, j;
    for (i = 0; i < input.size() -1; i++) {
        for (j = 0; j < input.size() -i -1; j++) {
            if (input[j] < input[j+1]) {
                iter_swap(input.begin() + j, input.begin() + j + 1);
            }
        }
    }
}

void print_vector(vector<int> &input) {
    for(auto it = input.begin(); it != input.end(); it++) {
        cout << setw(2) << *it << " ";
    }
}

int main()
{
    cout<<"podaj liczby:(0 przerywa petle)"<<endl;
    vector<int> numbers = build_vector();
    bubble_sort(numbers);
    print_vector(numbers);
    return 0;
}
