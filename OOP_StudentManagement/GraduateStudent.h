#pragma once
#include"Student.h"


class GraduateStudent : public Student
{
private:
	string ThesisTopic;
public:
	GraduateStudent(const string& firstname, const string& lastname, const float _StudentId, const string& thesistopic) : Student(firstname, lastname, _StudentId), ThesisTopic(thesistopic) {};

	void StudentDetails() const override {
		Student::StudentDetails();
		cout << "Thesis Topic: " << ThesisTopic << endl;
	}

};






