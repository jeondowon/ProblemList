#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Subject {
    string name;
    int credits;
    int score;
    string grade;
    double grade_point;
};

void calculate_grade(Subject& sub) {
    if (sub.score >= 95) { sub.grade = "A+"; sub.grade_point = 4.5; }
    else if (sub.score >= 90) { sub.grade = "A0"; sub.grade_point = 4.0; }
    else if (sub.score >= 85) { sub.grade = "B+"; sub.grade_point = 3.5; }
    else if (sub.score >= 80) { sub.grade = "B0"; sub.grade_point = 3.0; }
    else if (sub.score >= 75) { sub.grade = "C+"; sub.grade_point = 2.5; }
    else if (sub.score >= 70) { sub.grade = "C0"; sub.grade_point = 2.0; }
    else if (sub.score >= 65) { sub.grade = "D+"; sub.grade_point = 1.5; }
    else if (sub.score >= 60) { sub.grade = "D0"; sub.grade_point = 1.0; }
    else { sub.grade = "F"; sub.grade_point = 0.0; }
}

int main() {
    vector<Subject> subjects(3);
    double total_grade_points = 0;
    int total_credits = 0;

    for (int i = 0; i < 3; ++i) {
        cin >> subjects[i].name >> subjects[i].credits >> subjects[i].score;
        calculate_grade(subjects[i]);
        total_credits += subjects[i].credits;
        total_grade_points += subjects[i].credits * subjects[i].grade_point;
    }

    for (int i = 0; i < 3; ++i) {
        string display_name = subjects[i].name;
        for (char& c : display_name) {
            if (c == '_') c = ' ';
        }
        cout << display_name << "(" << subjects[i].credits << ")\t" << subjects[i].grade << " " << fixed << setprecision(1) << subjects[i].grade_point << endl;
    }

    double gpa = total_grade_points / total_credits;
    // GPA printed with 2 decimal places in example: GPA 3.93
    cout << "Total Credits " << total_credits << ", GPA " << fixed << setprecision(2) << gpa << endl;

    return 0;
}
