// Calculate the sum of numbers from 1 to 10

#include<iostream>
using namespace std;

int main () {
    int sum = 0;
    for (int i = 1; i <=10 ; i++) {
        sum = sum + i;
    }
    cout << "sum is = " << sum << endl;
    return 0;
}