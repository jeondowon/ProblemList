#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
private:
    double getAvg() const {
        return (score[0] + score[1] + score[2]) / 3.0;
    }
public:
    string name;
    string sid;
    int *score;
    
    void print() const {
        cout << "[" << sid << "] " << name << endl;
        cout << "The Average score is " << fixed << setprecision(1) << getAvg() << endl;
    }
};

int main() {
    Student s;
    s.score = new int[3];
    if (cin >> s.sid >> s.score[0] >> s.score[1] >> s.score[2]) {
        cin.ignore();
        getline(cin, s.name);
        s.print();
    }
    delete[] s.score;
    return 0;
}
