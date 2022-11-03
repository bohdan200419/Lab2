#include "Student.h"

Student::Student(std::string surname, long gradebookId)
{
	this->surname = surname;
	this->gradebookId = gradebookId;
	marks = std::vector<int>();
}

double Student::getAvarageMark()
{
	double avarageMark = 0;
	for (int mark : marks) {
		avarageMark += mark;
	}
	return avarageMark / marks.size();
}

void Student::addMark(int mark)
{
	marks.push_back(mark);
}

std::ostream& operator<<(std::ostream& ostream, const Student& student)
{
	ostream
		<< "Surname: " << student.surname
		<< ";\nGradebook id: " << student.gradebookId
		<< ";\nMarks:";
	for (int mark : student.marks) {
		ostream << " " << mark << ",";
	}
	ostream << ";";
	return ostream;
}
