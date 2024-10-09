#pragma once
#include "Staff.h"
class Teacher : public Staff{
private:
	string subject;
public:
	Teacher() : Staff() {
		subject =
			"";
	};
	Teacher(char t, string l, string f, int a, int h, float hr, string s) : Staff(t, l, f, a, h, hr) { subject = s; };

	string getSubject() {return subject;}
	void setSubject(string s) { subject = s; }

	void print() {
		cout << type << setw(11) << lname
			<< setw(17) << fname << setw(8) << age <<", "<<hours<<", "<<hrlyRate<<", "<<subject<< endl;
	}
};

