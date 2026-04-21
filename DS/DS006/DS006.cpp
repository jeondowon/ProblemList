#include <iostream>
#include <string>
using namespace std;

struct course {
    string name;
    int credit;
    int score;
    string grade;
};

int main(){
    course c[3];
    int total_credit = 0;
    double total_gpa = 0;
    int i;
    for (i = 0; i < 3; i++){
        cin >> c[i].name >> c[i].credit >> c[i].score;
        if(c[i].credit > 4 || c[i].credit < 1 || c[i].score > 100 || c[i].score < 0){
            cout << "Invalid value" << endl;
            break;
        }
    }

    double gpa[3] = {0};
    for (i = 0; i < 3; i++){
        for (int j = 0; j < c[i].name.length(); j++){
            if(c[i].name[j] == '_'){
                c[i].name[j] = ' ';
            }
        }
        if (c[i].score >= 95){
            c[i].grade = "A+";
            gpa[i] = 4.5;
        }
        else if (c[i].score >= 90){
            c[i].grade = "A0";
            gpa[i] = 4.0;
        }
        else if (c[i].score >= 85){
            c[i].grade = "B+";
            gpa[i] = 3.5;
        }
        else if (c[i].score >= 80){
            c[i].grade = "B";
            gpa[i] = 3.0;
        }
        else if(c[i].score >= 75){
            c[i].grade = "C+";
            gpa[i] = 2.5;
        }
        else if (c[i].score >= 70){
            c[i].grade = "C0";
            gpa[i] = 2.0;
        }
        else if (c[i].score >= 65){
            c[i].grade = "D+";
            gpa[i] = 1.5;
        }
        else if (c[i].score >= 60){
            c[i].grade = "D";
            gpa[i] = 1.0;
        }
        else {
            c[i].grade = "F";
            gpa[i] = 0.0;
        }
        
        total_credit += c[i].credit;
        total_gpa += (gpa[i] * c[i].credit);
    }

    for (i = 0; i < 3; i++){
        cout << c[i].name << '(' << c[i].credit << ')' << '\t' << c[i].grade << ' ' << gpa[i] << endl;
    }
    cout << "Total Credits" << total_credit << ", GPA: " << 
    (int)((total_gpa/total_credit) * 100) / 100.0 << endl;
}