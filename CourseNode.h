#ifndef COURSENODE_H
#define COURSENODE_H

using namespace std;

class CourseNode {
public:
    int courseCode;
    int creditHours;
    char grade;
    CourseNode* next;

    CourseNode(int cCode, int cHours, char cGrade)
        : courseCode(cCode), creditHours(cHours), grade(cGrade), next(nullptr) {}
};

#endif
