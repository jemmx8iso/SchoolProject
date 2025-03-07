
// This program prints the first 20 even numbers

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i <= 20) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
}