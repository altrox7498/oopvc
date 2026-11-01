/*To implement C++ programs that use exception handling and file operations for data storage
and retrieval.*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    try
    {
        // Writing data to file
        ofstream outFile("student.txt");

        if (!outFile)
        {
            throw "File could not be opened for writing";
        }

        outFile << "Roll No: 101" << endl;
        outFile << "Name: Kavita" << endl;
        outFile << "Marks: 85" << endl;

        outFile.close();

        cout << "Data written to file successfully." << endl;

        // Reading data from file
        ifstream inFile("student.txt");

        if (!inFile)
        {
            throw "File could not be opened for reading";
        }

        string line;

        cout << "\nData retrieved from file:" << endl;

        while (getline(inFile, line))
        {
            cout << line << endl;
        }

        inFile.close();
    }
    catch (const char* message)
    {
        cout << "Exception: " << message << endl;
    }

    return 0;
}