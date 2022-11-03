#include "Group.h"

Group::Group()
{
    students = std::vector<Student>();
}

std::vector<Student> Group::getTop5StudentsByAvarageMark()
{
    std::vector<Student> first5Students = std::vector<Student>();
    std::sort(students.begin(), students.end(),
        [](Student student1, Student student2) {
            return student1.getAvarageMark() > student2.getAvarageMark();
        }
    );
    for (int i = 0; i < 5; i++) {
        first5Students.push_back(students.at(i));
    }
    return first5Students;
}

void Group::addStudent(const Student& student)
{
    students.push_back(student);
}
