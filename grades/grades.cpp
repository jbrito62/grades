#include <iostream>
#include "grades.h"
#include <string>
#include "grades1.h"

using namespace std;

int main() {
    string studentName;
    double grade;
    int numGrades = 10;

    cout << "Enter the student's name: ";
    getline(cin, studentName);

    Student student(studentName);

    for (int i = 0; i < numGrades; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;

        if (grade >= 0 && grade <= 100) {
            student.AddGrade(grade);
        }
        else {
            cout << "Invalid grade! Please enter a grade between 0 and 100." << endl;
            i--; // Repeat the current grade input
        }
    }

    double average = student.CalcAverage(numGrades);

    string letterGrade = student.GetLetterGrade(average);

    cout << "Student: " << studentName << endl;
    cout << "Final Average: " << average << endl;
    cout << "Final Letter Grade: " << letterGrade << endl;

    return 0;
}
