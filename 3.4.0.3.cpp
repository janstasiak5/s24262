// Napisz funkcję swap(), która będzie jako parametr przyjmować dwa wskaźniki na int i
//zamienia miejscami wartości zmiennych, na które te wskaźniki wskazują. W funkcji main() napisz kod,
//który wywołuje funkcję swap(). Wydrukuj wartość dwóch testowych liczb przed i po zamianie.

#include <iostream>
void swap(int *b,int *a)
{
    int c = *b;
    *a=*b;
    *a=c;

}
int main()
{
     int a=3,b=4;

     std::cout<<&a<<" "<<a<<" "<<&b<<" "<<b<<std::endl;
     swap(&a, &b);
     std::cout<<&a<<" "<<a<<" "<<&b<<" "<<b<<std::endl;
     return 0;
}
