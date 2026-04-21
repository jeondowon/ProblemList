#include <iostream>
#include <string>

using namespace std;

string ltrim(string s) {
    size_t start = s.find_first_not_of(" \t");
    return (start == string::npos) ? "" : s.substr(start);
}

string rtrim(string s) {
    size_t end = s.find_last_not_of(" \t");
    return (end == string::npos) ? "" : s.substr(0, end + 1);
}

int main() {
    string s;
    if (getline(cin, s)) {
        s = rtrim(ltrim(s));
        size_t pos = s.find_last_of(" \t");
        if (pos == string::npos) {
            cout << s.length() << endl;
        } else {
            cout << s.length() - pos - 1 << endl;
        }
    }
    return 0;
}
