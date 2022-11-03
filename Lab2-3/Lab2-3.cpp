#include <iostream>
#include "Group.h"

int main()
{
    Group group = Group();
    Student student1 = Student("Surname 1", 1);
    student1.addMark(3);
    student1.addMark(5);
    student1.addMark(3);
    Student student2 = Student("Surname 2", 1);
    student2.addMark(2);
    student2.addMark(5);
    student2.addMark(3);
    Student student3 = Student("Surname 3", 1);
    student3.addMark(4);
    student3.addMark(5);
    student3.addMark(3);
    Student student4 = Student("Surname 4", 1);
    student4.addMark(2);
    student4.addMark(5);
    student4.addMark(2);
    Student student5 = Student("Surname 5", 1);
    student5.addMark(4);
    student5.addMark(5);
    student5.addMark(4);
    Student student6 = Student("Surname 6", 1);
    student6.addMark(1);
    student6.addMark(1);
    student6.addMark(1);
    group.addStudent(student1);
    group.addStudent(student2);
    group.addStudent(student3);
    group.addStudent(student4);
    group.addStudent(student5);
    group.addStudent(student6);
    for (Student student : group.getTop5StudentsByAvarageMark()) {
        std::cout << student << "\n\n";
    }
}