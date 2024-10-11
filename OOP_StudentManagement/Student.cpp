#include "Student.h"



Student::Student(string& firstname, string& lastname, const float _StudentId)
{
	FirstName = firstname;
	LastName = lastname;
	StudentId = _StudentId;

}

void Student::StudentDetails() const
{
	cout << "First name: " << FirstName << endl;
	cout << "last name: " << LastName << endl;
	cout << "Student: " << StudentId << endl;
}

Student::~Student()
{

}