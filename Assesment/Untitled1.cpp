#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLectures;

public:
    // Constructor to initialize lecture details
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numLectures = 0;
    }

    // Function to add lecture details
    void addLectureDetails(string lecturer, string subject, string course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = lectures;
    }

    // Function to display lecturer name and lecture details
    void displayLectureDetails() {
        cout << "Lecturer: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Number of lectures: " << numLectures << endl;
    }
};

int main() {
    const int MAX_LECTURERS = 5;
    Lecture lectures[MAX_LECTURERS];

    // Adding lecture details for 5 lecturers
    lectures[0].addLectureDetails("John Doe", "Computer Science", "Introduction to Programming", 20);
    lectures[1].addLectureDetails("Jane Smith", "Mathematics", "Calculus", 18);
    lectures[2].addLectureDetails("David Johnson", "Physics", "Mechanics", 22);
    lectures[3].addLectureDetails("Emily Brown", "Biology", "Genetics", 16);
    lectures[4].addLectureDetails("Michael Lee", "History", "World War II", 24);

    // Displaying lecture details for all lecturers
    cout << "Lecture Details:" << endl;
    for (int i = 0; i < MAX_LECTURERS; ++i) {
        cout << "Lecture " << i + 1 << ":" << endl;
        lectures[i].displayLectureDetails();
        cout << endl;
    }

    return 0;
}

