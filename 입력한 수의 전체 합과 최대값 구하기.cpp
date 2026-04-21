#include <iostream>

using namespace std;

void process() {
    int n;
    if (cin >> n) {
        int* arr = new int[n];
        int sum = 0;
        int max_val = -2147483648; 
        
        for (int i = 0; i < n; ++i) {
            cin >> *(arr + i);
            sum += *(arr + i);
            if (*(arr + i) > max_val) {
                max_val = *(arr + i);
            }
        }
        
        cout << sum << " " << max_val << endl;
        delete[] arr;
    }
}

int main() {
    process();
    return 0;
}
