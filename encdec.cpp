#include "encdec.h"
#include <iostream>
#include <fstream>
using namespace std;
void EncDec::encrypt(const string& inputFile, const string& outputFile) {
    cout << "Enter the encryption key: ";
    cin >> key;

    ifstream fin(inputFile, ios::binary);
    ofstream fout(outputFile, ios::binary);

    char c;
    while (fin >> noskipws >> c) {
        // Preforming encryption by adding the key
        int temp = c + key;
        fout << static_cast<char>(temp);
    }

    fin.close();
    fout.close();

    cout << "File encrypted successfully.\n";
}

void EncDec::decrypt(const string& inputFile, const string& outputFile) {
    cout << "Enter the decryption key: ";
    cin >> key;

    ifstream fin(inputFile, ios::binary);
    ofstream fout(outputFile, ios::binary);

    char c;
    while (fin >> noskipws >> c) {
        // Preforming encryption by removing the key
        int temp = c - key;
        fout << static_cast<char>(temp);
    }

    fin.close();
    fout.close();

    cout << "File decrypted successfully.\n";
}
