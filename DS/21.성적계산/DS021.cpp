#include <iostream>
using namespace std;

class Student {
    private:
        double getAvg() const;
    public:
        string name;
        string sid;
        int *score;
        void print() const;
};

double Student :: getAvg() const {
    double avg;
    avg = ((double)(score[0] + score[1] + score[2])) / 3 ;
    return avg;
};

void Student::print() const {
    cout << '[' << sid << "] " << name << endl;
    cout << "The Average score is " << getAvg() << endl;
};

int main(){
    Student person;
    person.score = new int[3];
    cin >> person.sid >> person.score[0] >> person.score[1] >> person.score[2];
    cin.get();
    getline(cin, person.name);

    person.print();

    delete[] person.score;
}