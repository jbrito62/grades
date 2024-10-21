#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    double totalGrade;
    int gradeCount;

public:
    
    Student(string studentName);

    void AddGrade(double grade);

    double CalcAverage(int numGrades);

    string GetLetterGrade(double average);
};

#endif
