#include<iostream>
using namespace std;

int main() {
    int num, reverse, rem;
    cout << "Enter a number to be reversed = ";
    cin >> num;
    reverse = 0;

        while (num != 0) {
            rem = num % 10;
            reverse = reverse * 10 + rem;     
            num /= 10;                        
        }
        cout << "The Reversed Number is = " << reverse << endl;
    return 0;
    // Hello
}