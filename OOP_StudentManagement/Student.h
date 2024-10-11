#pragma once
#include "Library.h"
class Student
{
private:
	string FirstName;
	string LastName;
	float StudentId;
public:
	Student(string& firstname, string& lastname, const float _StudentId);

	void StudentDetails() const;


	~Student();
};

