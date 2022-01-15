#include <iostream>
#include <ctime>
using namespace::std;
enum PERMISSION {
PERM_READ    = 1,
PERM_WRITE   = 2,
PERM_EXECUTE = 4,
};

int main()
{
    int users[10];
    for(auto i = 0; i <= 10; ++i) {
        users[i] = (10*1+i*2-i*3)%8;
    }
    for(auto i = 0; i <= 10; ++i) {
        cout << "User " << i << ": ";
        auto const read = (users[i] & PERM_READ);
        auto const write = (users[i] & PERM_WRITE);
        auto const exec = (users[i] & PERM_EXECUTE);
        if(read > 0)
            cout << "read";
        if(write > 0)
            cout << "write";
        if(exec > 0)
            cout << "execute";
        cout<<endl;
    }
}
