#include <iostream>
#include <vector>
using namespace::std;
int main()
{
    int o=0;
    int n;
    int start;
    cout<<"podaj rozmiar: ";
    cin >> n;
    cout<<"start(musi byc calkowita): ";
    cin >> start;
    if (n>100){
        cout<<" za duzo" <<endl;
        return 0;
    }
    vector <int> A;
    for (int i =0;i < n; i++)
    {
        A.push_back(start);
        start = start + 1;
    }
     cout<<"Tablica wyglada tak: "<<endl;
    for (int i= 0; i < A.size();i++)
    {

        cout<< A[i]<<" ";

    }
    cout<<""<<endl;
    cout<<"pierwszy: "<<endl;
    cout<<">";
    cout<< A[0]<<endl;
    cout<<"ostatni: "<<endl;
    cout<<">";
    cout<< A[n-1]<<endl;
    return 0;
}