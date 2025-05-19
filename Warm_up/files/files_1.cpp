#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string wordToReplace;
    std::string inputFileName;
    
    std::cout << "Въведи дума за замяна: ";
    std::cin >> wordToReplace;
    
    std::cout << "Въведи име на входния файл: ";
    std::cin >> inputFileName;

    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cerr << "Неуспешно отваряне на входния файл.\n";
        return 1;
    }

    std::ofstream outputFile("output.txt"); // Можеш да го направиш по избор
    if (!outputFile.is_open()) {
        std::cerr << "Неуспешно създаване на изходен файл.\n";
        return 1;
    }

    std::string word;
    while (inputFile >> word) {
        if (word == wordToReplace) {
            outputFile << "Jess ";
        } else {
            outputFile << word << " ";
        }
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Файлът е записан с направените замени.\n";
    return 0;
}
