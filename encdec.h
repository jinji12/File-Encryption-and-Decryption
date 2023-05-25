#ifndef ENCDEC_H
#define ENCDEC_H

#include <string>

class EncDec {
    int key;

public:
    /**
     * @brief encrypts the input file and outputs the encrypted file
     * 
     * @param inputFile 
     * @param outputFile 
     */
    void encrypt(const std::string& inputFile, const std::string& outputFile);

    /**
     * @brief decrypts the inputFile and outputs the decrypted file
     * 
     * @param inputFile 
     * @param outputFile 
     */
    void decrypt(const std::string& inputFile, const std::string& outputFile);
};

#endif  // ENCDEC_H

