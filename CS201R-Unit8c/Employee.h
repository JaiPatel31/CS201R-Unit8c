#pragma once
#include "Staff.h"
class Employee :public Staff
{
private:
	float vacaHours;
public:
	Employee() :Staff() { vacaHours = 0.0; }
	Employee(char t, string l, string f, int a, int h, float hr, float vh) : Staff(t, l, f, a, h, hr) { vacaHours = vh; }

	float getVacaHours() { return vacaHours; }
	void setVacaHours(float vh) { vacaHours = vh; }

	void print() {
		cout << type << setw(11) << lname
			<< setw(17) << fname << setw(8) << age << ", " << hours << ", " << hrlyRate << ", " << vacaHours << endl;
	}
};

