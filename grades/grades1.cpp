#include "grades1.h"


Student::Student(string studentName) {
    name = studentName;
    totalGrade = 0.0;
    gradeCount = 0;
}

void Student::AddGrade(double grade) {
    totalGrade += grade;
    gradeCount++;
}

double Student::CalcAverage(int numGrades) {
    return (numGrades > 0) ? totalGrade / numGrades : 0.0;
}

string Student::GetLetterGrade(double average) {
    if (average >= 100) return "A+";
    else if (average >= 93) return "A";
    else if (average >= 90) return "A-";
    else if (average >= 87) return "B+";
    else if (average >= 83) return "B";
    else if (average >= 80) return "B-";
    else if (average >= 77) return "C+";
    else if (average >= 73) return "C";
    else if (average >= 70) return "C-";
    else if (average >= 67) return "D+";
    else if (average >= 63) return "D";
    else if (average >= 60) return "D-";
    else return "F";
}
