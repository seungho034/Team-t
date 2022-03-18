#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream readFile;             

    readFile.open("textNew.txt");    
    string inputData;

    if (readFile.is_open()) {
        while (!readFile.eof()) {
            getline(readFile, inputData);   
            cout << inputData << endl;
        }
    }

    readFile.close(); 

}
