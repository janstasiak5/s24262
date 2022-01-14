#include <iostream>
#include <cstring>

using namespace std;


void memsetSimulation(char *source, int character, size_t length) {
    for(int i = 0; i < length; ++i) {
        source[i] = character;
    }
}

int main() {
    char str[100] = "Konstantynopolitanczykowianeczka\0";
    cout << "Przed:" << str << endl;
    
    memsetSimulation(str, 'd', 5);
    cout << "Po symulacji:" << str << endl;
    
    memset(str, 'e', 8);
    cout << "Po wywolaniu funkcji z biblioteki:" << str << endl;
    
    return 0;
}