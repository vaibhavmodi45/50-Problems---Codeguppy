#include<iostream>
#include<vector>
using namespace std;

void PositiveNumArray() {
    int n;
    cout << "Enter the number of elements of Array = ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Positive Numbers from the Given Array are: ";
    for(int i = 0; i < n; i++) {
        if(numbers[i] > 0) { // ✅ Correct condition to check positivity
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    PositiveNumArray();
    return 0;
}