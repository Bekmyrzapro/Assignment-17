#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

void decompress(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream inputFile(inputFilePath);
    std::ofstream outputFile(outputFilePath);

    char currentChar;
    int count;

    while (inputFile >> count >> currentChar) {
        for (int i = 0; i < count; ++i) {
            outputFile << currentChar;
        }
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    decompress("compressed.txt", "decompressed.txt");
    return 0;
}
