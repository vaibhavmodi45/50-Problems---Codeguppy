#include<iostream>
#include<vector>
using namespace std;

void MaxinArray() {
    int n;
    cout << "Enter the number of elements in the array = ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int max = numbers[0];  // ✅ Initialize with first element of the array
    for(int i = 1; i < n; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "Maximum Number is = " << max << endl;  // ✅ Moved outside the loop
}

int main() {
    MaxinArray();
    return 0;
}