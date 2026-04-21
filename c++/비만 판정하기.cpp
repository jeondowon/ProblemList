#include <iostream>

using namespace std;

int main() {
    int height, weight;
    double bmi;

    if (cin >> height >> weight) {
        double height_m = height / 100.0;
        bmi = weight / (height_m * height_m);

        if (bmi >= 25) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
