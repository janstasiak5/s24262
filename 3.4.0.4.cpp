// Napisz program, który demonstruje działanie funkcji cone(). Funkcja będzie przyjmować 2
//parametry: wysokość i promień, oraz zwracać 2: jego objętość, pole podstawy (podpowiedź: użyj referencji).
//W funkcji main() napisz kod, który wywołuje funkcję cone(). Wynik wydrukuj na std::cout.
#include <iostream>
#include <cmath>
using namespace::std;

void cone(double r, double h, double *v, double *p) //deklaracja funkcji,zmiennych i wskaznikow
{
    *p= M_PI * r * r; //przypisanie wartosci do wskaznika p
    *v= (M_PI * (r * r) * h)/3;//przypisanie wartosci do wskaznika v
}
int main()
{
    double h,r,v,p;//deklaracja zmiennych
    cout<<"H :";
    cin>>h;//pobranie od uzytkownika zmiennej
    cout<<"R :";
    cin>>r;//pobranie od uzytkownika zmiennej
    cone(r,h,&v,&p);//wywolanie funkcji i referencja
    cout<<"pole: "<<p<<" "<<"objetosc : "<<v;//wypisanie wartosci
    return 2;
}
