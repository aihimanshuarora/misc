#include <iostream>

using namespace std;

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars with multiplication signs
        for (int j = 1; j <= i; j++) {
            cout << j << "*";
        }

        // Move to the next line
        cout << endl;
    }

    // Lower half of the pattern (excluding the middle row)
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars with multiplication signs
        for (int j = 1; j <= i; j++) {
            cout << j << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
