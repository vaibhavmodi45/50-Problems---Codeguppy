#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int first = 0, second = 1;
    cout << first << endl << second << endl;

    for (int i = 0; i < n - 2; i++ ) {
        int next = first + second;
        first = second;
        second = next;
        cout << next << endl;
    }
    return 0;
}