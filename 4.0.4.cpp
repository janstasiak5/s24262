#include <iostream>
#include <vector>

using namespace std;
struct Student {
	string imie;
	string nazwisko;
	vector<float> oceny;
};
struct group {
    string nazwa;
    vector<struct Student> students;
};

auto add_to_group(struct group*, struct Student) -> void;

int main() {
	Student s1 {"Jan", "Bo", vector<float>{2,2,2,2,3,4,5}};
	Student s2 {"Ban", "Jo", vector<float>{5,5,2,3,3,4,5}};
	Student s3 {"Nab", "Ob", vector<float>{3,3,3,3,3,3,3}};

	vector<Student> s4;
    struct group g{"nazwa grupy", s4};
    add_to_group(&g, s1);
    add_to_group(&g, s2);
    add_to_group(&g, s3);
    for(auto const i : g.students) {
    cout << i.imie << "\n";


	return 0;
}}
auto add_to_group(struct group* g, struct Student s4) -> void {
    (*g).students.push_back(s4);
}
