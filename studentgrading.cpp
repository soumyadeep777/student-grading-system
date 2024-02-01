#include<iostream>
using namespace std;

int main() {
    int subjectIndex;
    float subjectMark, totalMarks = 0, averageMark;

    cout << "Enter marks obtained in 5 subjects: ";

    for (subjectIndex = 0; subjectIndex < 5; subjectIndex++) {
        cin >> subjectMark;
        totalMarks = totalMarks + subjectMark;
    }

    averageMark = totalMarks / 5;

    cout << "\nGrade = ";

    if (averageMark >= 91 && averageMark <= 100)
        cout << "AA";
    else if (averageMark >= 81 && averageMark < 91)
        cout << "A";
    else if (averageMark >= 71 && averageMark < 81)
        cout << "BB";
    else if (averageMark >= 61 && averageMark < 71)
        cout << "B";
    else if (averageMark >= 51 && averageMark < 61)
        cout << "CC";
    else if (averageMark >= 41 && averageMark < 51)
        cout << "C";
    else if (averageMark >= 33 && averageMark < 41)
        cout << "D";
    else if (averageMark >= 0 && averageMark < 33)
        cout << "FAIL";
    else
        cout << "Invalid!";

    cout << endl;

    return 0;
}
