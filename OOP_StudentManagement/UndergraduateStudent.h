#pragma once
#include"Student.h"


class UndergraduateStudent : public Student {

private:
	string Major;
public:
	UndergraduateStudent(const string& firstname, const string& lastname, const float _StudentId, const string& Major) : Student(firstname, lastname, _StudentId), Major(Major) {};


};