#include <iostream>
#include <string>
#include <vector>
using namespace::std;
void Split(string s, vector<string> &v)
{
	string p="";
	for (int i=0;i < s.length();i++){
	if(s[i] == ' '){
	v.push_back(p);
	p = "";
	}
	else{
	p.push_back(s[i]);
	}
	}v.push_back(p);

}
void Print(vector<string>v){
	for(int i=0;i<v.size();i++)
	cout<<"'" << v[i] << "' ";
	cout<<endl;
}
int main()
{
	vector<string>v;
	string s;
	getline(cin,s);
	Split(s,v);
	Print(v);

}
