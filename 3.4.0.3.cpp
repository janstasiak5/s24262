#include <iostream>
#include <algorithm>

auto swap(int &a,int &b)
{

    std::cout<<"przed:"<<std::endl;
    std::cout<<"a : "<<a<< ", b: "<<b<<std::endl;
    std::cout<<"po:"<<std::endl;
    std::swap(a,b);
    std::cout<<"a : "<<a<< ", b: "<<b<<std::endl;

}
int main(int a, int b)
{
    swap(a,b);
    return 0;

}
