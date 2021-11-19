#include <iostream>
#include <cmath>
#include <string>
using namespace::std;
int main()
{
	int x;
	char tak;
	do{
	cout<<"Wybor figury: "<<endl;
	cout<<"trojkat (1)"<<endl;
	cout<<"prostokat (2)"<<endl;
	cout<<"kolo (3)"<<endl;
	cout<<"trapez (4)"<<endl;
	cout<<"szesciokat foremny (5)"<<endl;
	cout<<"wybierz figure (1-5): ";
	cin>>x;
	switch (x){
	case 0:
	cout<<"-1"<<endl;
	break;
	case 1:
	cout<<"Podaj wymiary: "<<endl;
	int a,h;
	cout<<"a: ";
	cin>>a;
	cout<<"h: ";
	cin>>h;
	if (a<=0, h<=0){
	cout<<"-1"<<endl;
	return 0;}
	if (a<=0){
	cout<<"-1"<<endl;
	return 0;}
	if (h<=0){
	cout<<"-1"<<endl;
	return 0;}
	cout<< "Pole = "<<(a*h)*0.5<<endl;
	break;
	case 2:
	cout<<"Podaj wymiary: "<<endl;
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>h;
        if (a<=0, h<=0){
        cout<<"-1"<<endl;
        return 0;}
        if (a<=0){
        cout<<"-1"<<endl;
        return 0;}
        if (h<=0){
        cout<<"-1"<<endl;
        return 0;}
	cout<<"Pole = "<<a*h<<endl;
	break;
	case 3:
	cout<<"Podaj promien: "<<endl;
	cin>>a;
	if(a<=0){
	cout<<"-1"<<endl;
	return 0;}
	cout<<"Pole = "<<M_PI * a*a<<endl;
	break;
	case 4:
	int b;
	cout<<"Podaj wymiary: "<<endl;
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"h: ";
	cin>>h;
	if (a<=0, h<=0, b<=0){
        cout<<"-1"<<endl;
        return 0;}
        if (a<=0){
        cout<<"-1"<<endl;
        return 0;}
        if (h<=0){
        cout<<"-1"<<endl;
        return 0;}
	if (b<=0){
	cout<<"-1"<<endl;
	return 0;}
	cout<<"Pole = "<<((a+b)*h)*0.5<<endl;
	break;
	case 5:
	cout<<"Podaj bok: "<<endl;
	cin>>a;
	if (a<=0){
	cout<<"-1"<<endl;
	return 0;}
	cout<<"Pole ="<<(3*(a*a)*sqrt(3))*0.5<<endl;
	break;}
	cout<<"kontynuowac t/n?"<<endl;
	cin>>tak;

	}while(tak != 'n');
	return 0;

}
