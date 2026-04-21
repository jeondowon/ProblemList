#include <iostream>
using namespace std;

class Student{
    char name[100];
    int* score_lc;
    int* score_rc;

    public:

    Student();
    bool isValidScore(int* s);
    void input();
    int total();
    bool isPass(int s);
    void print();
};

Student::Student(){
    name[0] = '\0';
    score_lc = 0;
    score_rc = 0;
}

bool Student::isValidScore(int* s){
    if(*s > 495 || *s < 0){
        return false;
    }
    return true;
};

void Student::input(){
    cin.getline(name, 100);
    score_lc = new int;
    score_rc = new int;

    do{
        cout << "LC> ";
        cin >> *score_lc;
    } while(!isValidScore(score_lc));

    do{
        cout << "RC> ";
        cin >> *score_rc;
    } while(!isValidScore(score_rc));
}

int Student::total(){
    return (*score_lc + *score_rc);
}

bool Student::isPass(int s){
    if(s >= 350){
        return true;
    }
    return false;
}

void Student::print(){
    cout << '[' << name << ']' << endl;
    cout << "LC - " << *score_lc << ' ';
    if(isPass(*score_lc)){
        cout << "Pass" << endl;
    }
    else{
        cout << "Fail" << endl;
    }
    cout << "RC - " << *score_rc << ' ';
    if(isPass(*score_rc)){
        cout << "Pass" << endl;
    }
    else{
        cout << "Fail" << endl;
    }
    cout << "Total - " << total() << endl;
}

int main(){
    Student person;
    person.input();
    person.print();
}