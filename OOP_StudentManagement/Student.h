#pragma once
#include "Library.h"
class Student
{
private:
	string FirstName;
	string LastName;
	float StudentId;
public:
	Student(const string& firstname, const string& lastname, const float _StudentId) : FirstName(firstname), LastName(lastname), StudentId(_StudentId) {};

	virtual void StudentDetails() const
	{
		cout << "First name: " << FirstName << endl;
		cout << "last name: " << LastName << endl;
		cout << "Student: " << StudentId << endl;
	};


	~Student();
};

