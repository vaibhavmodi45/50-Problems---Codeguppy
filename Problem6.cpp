// Calculate 10!

#include<iostream>
using namespace std;

int main() {
    int fact = 1;
    for (int i = 1; i <= 10; i++) {
        fact = fact * i;
    }
    cout << "factorial of 10 is = " << fact << endl;
}