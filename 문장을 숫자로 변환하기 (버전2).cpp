#include <iostream>
#include <string>

using namespace std;

int value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int main() {
    string s;
    if (cin >> s) {
        int sum = 0;
        for (size_t i = 0; i < s.length(); ++i) {
            int current = value(s[i]);
            if (i + 1 < s.length()) {
                int next = value(s[i + 1]);
                if (current < next) {
                    sum += (next - current);
                    ++i; // Skip the next character as it's already used
                    continue;
                }
            }
            sum += current;
        }
        cout << sum << endl;
    }
    return 0;
}
