// Print the multiplication table with 7

#include<iostream>
using namespace std;

int main() {
    int n = 7;
    int i = 1;
    while (i <= 10) {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}