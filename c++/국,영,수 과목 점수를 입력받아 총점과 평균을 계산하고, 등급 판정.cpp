#include <iostream>
#include <iomanip>

using namespace std;

struct st_score {
    int kor, eng, math;
    int total;
    double average;
};

int main() {
    st_score s;
    if (cin >> s.kor >> s.eng >> s.math) {
        s.total = s.kor + s.eng + s.math;
        s.average = s.total / 3.0;

        cout << s.total << " " << fixed << setprecision(1) << s.average << endl;
        cout << "Korean - " << (s.kor >= 70 ? "Pass" : "Fail") << endl;
        cout << "English - " << (s.eng >= 70 ? "Pass" : "Fail") << endl;
        cout << "Math - " << (s.math >= 70 ? "Pass" : "Fail") << endl;
    }
    return 0;
}
