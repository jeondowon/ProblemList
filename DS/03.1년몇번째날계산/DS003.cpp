#include <iostream>
using namespace std;

int calDays (int month){
        int days;
        switch (month){
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
        return days;
    }

int main(){
    int month, day;
    int sum = 0;
    cin >> month >> day;
    for (int i = 1; i < month; i++){
        sum += calDays(i);
    }
    sum += day;
    cout << sum << "\n";
}