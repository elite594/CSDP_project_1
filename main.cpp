#include "CourseList.h"
#include <iostream>

using namespace std;

int main() {
    CourseList courseList;
    int courseCode, creditHours;
    char grade;

    // Input for 10 courses
    for (int i = 0; i < 10; ++i) {
        cout << "Enter course code, credit hours, and grade: ";
        cin >> courseCode >> creditHours >> grade;
        courseList.addCourse(courseCode, creditHours, grade);
    }

    cout << "\nCourse list before deletion:" << endl;
    courseList.displayList();

    // Delete two courses
    cout << "\nEnter two course codes to delete: ";
    int code1, code2;
    cin >> code1 >> code2;

    courseList.deleteCourse(code1);
    courseList.deleteCourse(code2);

    cout << "\nCourse list after deletion:" << endl;
    courseList.displayList();

    return 0;
}
