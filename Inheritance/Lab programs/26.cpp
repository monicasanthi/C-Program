#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream inputFile("input.txt"); // Open the input file
    ofstream outputFile("output.txt"); // Open the output file

    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return 1;
    }
    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        return 1;
    }

    outputFile << inputFile.rdbuf(); 

    inputFile.close();
    outputFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}