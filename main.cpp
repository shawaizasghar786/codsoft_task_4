#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countWords(string filen) {
    ifstream file(filen);
    string word;
    int count = 0;

    while (file >> word) {
        count++;
    }

    return count;
}

int main() {
    string filePath = "D:\\Task 4\\data.txt"; // Replace with your file path

    int wordCount = countWords(filePath);

    if (wordCount >= 0) {
        cout << "Total word count in " << filePath << ": " << wordCount << " words" << endl;
    }

    return 0;
}
