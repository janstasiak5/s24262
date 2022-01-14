#include <iostream>
#include <algorithm>
using namespace std;

//      \/   n=3
// 0 1 2  4 5 a b a f c 
// 0 1 2  a 5 4 b a f c

void memrev(void *s, size_t n) {
    if (n <= 0) {
        return;
    }
    int pivot = n / 2; // odrzucamy środek przedzialu dla n%2 = 1
    for (int i = 0; i < pivot; i++) {
        char *pa = (char*)s + i;
        char *pb = (char*)s + n - 1 - i;
        
        char temp = *pa;
        *pa = *pb;
        *pb = temp;
    }
}

int main() {
    char str[100] = "Ala ma kota i tyle \0";
    cout << "przed: " << str << endl;
    
    char *str_p = str;
    char *str_offset_p = str_p + 7;
    memrev(str_offset_p, 11);
    
    cout << "po: " << str << endl;
    
    return 0;
}