// Calculate the average of the numbers in an array of numbers

#include<iostream>
#include<vector>
using namespace std;

void AVGofstaticArray() {
    int staticArray[5] = {5012, 100, 105, 210, 125};

    int sum = 0;
    for(int i =0; i < 5; i++) {
        sum += staticArray[i];
    }
    
    int average = sum / 5;
    cout << "Avarage of arrays elements is = " << average << endl;
}

void AVGofdynamicArray() {
    int n;
    cout << "Enter the number of elements of Array = ";
    cin >> n;

    vector <int> numbers(n);

    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    int Avarage = sum / n;
    cout << "Avarage of " << n << "Number's is = " << Avarage << endl;
}

int main() {
    // AVGofstaticArray();
    AVGofdynamicArray();
    return 0;
}