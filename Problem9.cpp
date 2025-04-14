// Calculate the sum of numbers in an array of numbers

#include<iostream>
#include<vector>
using namespace std;

void predefinedArray() {
    int predefinedArray[5] = {1, 2, 3, 4, 5};

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + predefinedArray[i];
    }
    cout << "sum of array is = " << sum << endl;
}

void dynamicArray() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + numbers[i];
    }
    cout << "sum of array is = " << sum << endl;
    
}



int main() {
    // predefinedArray();
    dynamicArray();
    return 0;
}