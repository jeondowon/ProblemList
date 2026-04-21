#include <iostream>

using namespace std;

int main() {
    int month, day;
    if (cin >> month >> day) {
        int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day_count = 0;
        for (int i = 1; i < month; ++i) {
            day_count += days_in_month[i];
        }
        day_count += day;
        cout << day_count << endl;
    }
    return 0;
}
