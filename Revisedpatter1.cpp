#include <iostream>
using namespace std;

int main() {
    int rows = 6; // Number of rows in the triangle
    char evenChars[] = {'@', '#'}; // Characters for even rows
    char oddChars[] = {'#', '$'};  // Characters for odd rows

    for (int i = 0; i < rows; i++) {
        // Add spaces for indentation
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

        // Alternate characters based on row type (even or odd)
        if (i % 2 == 0) { // Even rows
            for (int j = 0; j < rows - i; j++) {
                cout << evenChars[j % 2] << " ";
            }
        } else { // Odd rows
            for (int j = 0; j < rows - i; j++) {
                cout << oddChars[j % 2] << " ";
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}