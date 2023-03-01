#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
// To create a structure, use the struct keyword and declare each of its members inside curly braces.
// After the declaration, specify the name of the structure variable (studentsData in the example below):
struct // Structure declaration
{
    int age;           // Member (int variable)
    string first_name; // Member (string variable)
    string last_name;  // Member (string variable)
    int standard;      // Member (int variable)
} studentsData;        // Structure variable
int main()
{
    // To access members of a structure, use the dot syntax (.)
    // Put data into the structure by using " cin "
    cin >> studentsData.age;
    cin >> studentsData.first_name;
    while (studentsData.first_name.length() > 50) // input length must be 50 characters
    {
        cin >> studentsData.first_name;
    }
    cin >> studentsData.last_name;
    while (studentsData.last_name.length() > 50) // input length must be 50 characters
    {
        cin >> studentsData.last_name;
    }
    cin >> studentsData.standard;

    // Print the structure members
    cout << studentsData.age << " " << studentsData.first_name << " " << studentsData.last_name << " " << studentsData.standard << "\n";

    return 0;
}

// https://www.w3schools.com/cpp/cpp_structs.asp

// use -> setw(int anynumber);