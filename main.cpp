#include "encdec.h"
#include <iostream>

using namespace std;

int main() {
    EncDec encdec;
    char choice;
    cout << "----------------------";
    cout << "Enter your choice:\n";
    cout << "1. Encrypt a file\n";
    cout << "2. Decrypt a file\n";
    cin >> choice;

    string inputFile, outputFile;

    cout << "Enter the input file name: ";
    cin >> inputFile;

    cout << "Enter the output file name: ";
    cin >> outputFile;

    switch (choice) {
        case '1':
            encdec.encrypt(inputFile, outputFile);
            break;

        case '2':
            encdec.decrypt(inputFile, outputFile);
            break;

        default:
            cout << "Invalid choice.\n";
            break;
    }

    return 0;
}
