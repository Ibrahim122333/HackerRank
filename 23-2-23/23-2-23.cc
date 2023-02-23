#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{                              // HH:MM:SS
                               // main -> HH , MM , SS
                               // not main -> :
    std::vector<int> output;   // creating vecter to stores main data
    char tempForNotMain;       // tempForNotMain variable stores character which is not main temporary
    int tempForMain;           // tempForMain variable stores int which is main temporary
    std::stringstream ss(str); // creating stringstream object(ss)
                               // and inserting string(str) in obj(ss)
    while (ss)                 // while loop fails when ss(mens string is empty)
    {
        ss >> tempForMain >> tempForNotMain; // using insertion operator(<<) inserting data to both variables
        output.push_back(tempForMain);       // inserting integer to vector by using function push_back()
    }
    return output; // return the vector
}

int main()
{
    string str;                            // variable to store the input string
    cin >> str;                            // input string from user
    vector<int> integers = parseInts(str); // vector to save the return data from "parseInts()" function
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n"; // print values
    }

    return 0;
}
/*
stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. stringstream can be helpful in different type of parsing. The following operators/functions are commonly used here

    Operator >> Extracts formatted data.
    Operator << Inserts formatted data.
    Method str() Gets the contents of underlying string device object.
    Method str(string) Sets the contents of underlying string device object.

https://www.geeksforgeeks.org/stringstream-c-applications/

*/