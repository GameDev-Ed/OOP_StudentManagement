#pragma once
#include "Student.h"

class Course : public Student
{
private:

	vector<Student*> students;



public:
	Course();
	~Course();



};

