#ifndef COURSELIST_H
#define COURSELIST_H

#include "CourseNode.h"

using namespace std;

class CourseList {
private:
    CourseNode* head;
public:
    CourseList() : head(nullptr) {}
    ~CourseList();
    void addCourse(int courseCode, int creditHours, char grade);
    void deleteCourse(int courseCode);
    void deleteAllNodes();
    void displayList() const;
};

#endif
