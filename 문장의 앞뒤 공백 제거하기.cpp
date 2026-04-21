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
        cout << rtrim(ltrim(s)) << endl;
    }
    return 0;
}
