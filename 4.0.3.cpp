#include <iostream>
#include <vector>

using namespace std;



struct Student {
	string imie;
	string nazwisko;
	vector<float> oceny;
};

float average_of(const Student &student) {
	float average = 0.0;
	float size = student.oceny.size();
	for (int i = 0; i < size; i++) {
		average += student.oceny[i];
	}
	return average / size;
}

Student getBestStudent(const vector<Student> &studenci) {
	Student best = studenci[0];
	for(const Student &s: studenci) {
		if (average_of(best) < average_of(s)) {
			best = s;
		}
	}
	return best;
}

int main() {
	Student s1 {"Jan", "Bo", vector<float>{2,2,2,2,3,4,5}};
	Student s2 {"Ban", "Jo", vector<float>{5,5,2,3,3,4,5}};
	Student s3 {"Nab", "Ob", vector<float>{3,3,3,3,3,3,3}};

	vector<Student> studenci {s1, s2, s3};
	Student best = getBestStudent(studenci);

	cout << "Najlepszy student: " << best.imie << " " << best.nazwisko << endl;

	return 0;
}
