#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    if (getline(cin, s)) {
        int blanks = 0;
        int counts[26] = {0};

        for (char c : s) {
            if (c == ' ') {
                blanks++;
            } else if (isalpha(c)) {
                counts[toupper(c) - 'A']++;
            }
        }

        cout << "blanks : " << blanks << endl;
        for (int i = 0; i < 26; ++i) {
            if (counts[i] > 0) {
                cout << (char)('A' + i) << " : " << counts[i] << endl;
            }
        }
    }
    return 0;
}
