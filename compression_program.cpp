#include <iostream>
#include <fstream>
#include <string>

void compress(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream inputFile(inputFilePath);
    std::ofstream outputFile(outputFilePath);

    char currentChar, previousChar;
    int count = 0;

    if (inputFile >> std::noskipws >> previousChar) {
        count = 1;
    }

    while (inputFile >> std::noskipws >> currentChar) {
        if (currentChar == previousChar) {
            ++count;
        } else {
            outputFile << count << previousChar;
            previousChar = currentChar;
            count = 1;
        }
    }

    if (count > 0) {
        outputFile << count << previousChar;
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    compress("input.txt", "compressed.txt");
    return 0;
}
