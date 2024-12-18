#pragma once
#include "Library.h"
class Student
{
private:
	string FirstName;
	string LastName;
	float StudentId;
public:
	// Default constructor
	Student() : FirstName(""), LastName(""), StudentId(0) {};
	//Constructor initializer list(Which makes the "student" but also initalize the variables in a more efficent way)
	Student(const string& firstname, const string& lastname, const float _StudentId) : FirstName(firstname), LastName(lastname), StudentId(_StudentId) {};

	// Method to display student details
	virtual void StudentDetails() const
	{
		cout << endl << endl;
		cout << "First name: " << FirstName << endl;
		cout << "last name: " << LastName << endl;
		cout << "Student: " << StudentId << endl;
	};


	 
};

