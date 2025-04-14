// Calculate the sum of even numbers greater than 10 and less than 30

#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 11; i < 30; i++) {
        if(i % 2 == 0) {
            sum = sum + i;
        }
    }
    cout << "sume of even nums greater than 10 and less than 30 is = " << sum << endl;
}