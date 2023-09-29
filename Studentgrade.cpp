#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> student_names;
    vector<double> student_grades;
    string name;
    double grade;

    while (true) {
        cout << "Enter student name (or 'done' to finish): ";
        cin >> name;

        if (name == "done") {
            break;
        }

        cout << "Enter grade for " << name << ": ";
        cin >> grade;

        student_names.push_back(name);
        student_grades.push_back(grade);
    }

    int num_students = student_names.size();
    if (num_students == 0) {
        cout << "No data entered. Exiting program." << endl;
        return 1;
    }

    // Calculate average grade
    double total_grade = 0;
    double highest_grade = student_grades[0];
    double lowest_grade = student_grades[0];

    for (int i = 0; i < num_students; i++) {
        total_grade += student_grades[i];
        if (student_grades[i] > highest_grade) {
            highest_grade = student_grades[i];
        }
        if (student_grades[i] < lowest_grade) {
            lowest_grade = student_grades[i];
        }
    }

    double average_grade = total_grade / num_students;

    cout << "Average grade: " << average_grade << endl;
    cout << "Highest grade: " << highest_grade << endl;
    cout << "Lowest grade: " << lowest_grade << endl;

    return 0;
}