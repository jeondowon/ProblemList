#include <iostream>
using namespace std;

void findSumAndMax (int* arr, int size, int &total, int &maxNum){
    total = 0;
    maxNum = arr[0];

    for (int i = 0; i < size; i++){
        total += arr[i];
        if (arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
}

int main (){
    int count;
    cin >> count;
    int* arr = new int[count];

    for (int i = 0; i < count; i++){
        cin >> arr[i];
    }

    int sum, max;
    findSumAndMax(arr, count, sum, max);

    cout << sum << " " << max << endl;

    delete[] arr;       //메모리 해제

    return 0;

}