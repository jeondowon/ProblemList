#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 3; 
    string* strs = new string[n];
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }
    
    string prefix = "";
    if (n > 0) {
        prefix = strs[0];
        for (int i = 1; i < n; ++i) {
            int j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
        }
    }
    
    if (prefix.empty()) {
        cout << "?" << endl;
    } else {
        cout << prefix << endl;
    }

    delete[] strs;
    return 0;
}
