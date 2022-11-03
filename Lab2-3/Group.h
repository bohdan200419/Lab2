#pragma once

#include <algorithm>
#include "Student.h"

class Group
{
	std::vector<Student> students;

public:

	Group();

	std::vector<Student> getTop5StudentsByAvarageMark();

	void addStudent(const Student& student);

};

