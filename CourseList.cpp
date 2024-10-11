#include "CourseList.h"
#include <iostream>

using namespace std;

CourseList::~CourseList() {
    deleteAllNodes();
}

void CourseList::addCourse(int courseCode, int creditHours, char grade) {
    CourseNode* newNode = new CourseNode(courseCode, creditHours, grade);

    if (!head || head->courseCode > courseCode) {
        newNode->next = head;
        head = newNode;
    } else {
        CourseNode* current = head;
        while (current->next && current->next->courseCode < courseCode)
            current = current->next;
        newNode->next = current->next;
        current->next = newNode;
    }
}

void CourseList::deleteCourse(int courseCode) {
    if (!head) return;

    if (head->courseCode == courseCode) {
        CourseNode* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    CourseNode* current = head;
    while (current->next && current->next->courseCode != courseCode)
        current = current->next;

    if (current->next) {
        CourseNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void CourseList::deleteAllNodes() {
    while (head) {
        CourseNode* temp = head;
        head = head->next;
        delete temp;
    }
}

void CourseList::displayList() const {
    if (!head) {
        cout << "Course list is empty." << endl;
        return;
    }

    CourseNode* current = head;
    while (current) {
        cout << "Course: " << current->courseCode
             << ", Credit Hours: " << current->creditHours
             << ", Grade: " << current->grade << endl;
        current = current->next;
    }
}
