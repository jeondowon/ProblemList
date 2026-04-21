#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (cin >> s) {
        int sum = 0;
        for (char c : s) {
            switch (c) {
                case 'I': sum += 1; break;
                case 'V': sum += 5; break;
                case 'X': sum += 10; break;
                case 'L': sum += 50; break;
                case 'C': sum += 100; break;
                case 'D': sum += 500; break;
                case 'M': sum += 1000; break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
