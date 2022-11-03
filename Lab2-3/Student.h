#pragma once

#include <string>
#include <vector>
#include <iostream>

class Student
{
	std::string surname;

	long gradebookId;

	std::vector<int> marks;

public:

	Student(const std::string surname, long gradebookId);

	friend std::ostream& operator << (std::ostream& ostream, const Student& student);

	double getAvarageMark();

	void addMark(int mark);

};

