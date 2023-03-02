#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student // The class and name is Student
{
private:                                      // Access specifier and it is private
    int your_age, your_standard;              // Attribute (int variable)
    string your_first_name, your_second_name; // Attribute (string variable)
public:                                       // Access specifier and it is public
                                              // Method/function  -> set_age(int) defined inside the class
    void set_age(int age)                     // all set function modifies the values of private variables
    {
        your_age = age; // set the age to private variable
    }
    void set_standard(int standard)
    {
        your_standard = standard;
    }
    void set_first_name(string first_name)
    {
        your_first_name = first_name;
    }
    void set_last_name(string last_name)
    {
        your_second_name = last_name;
    }

    int get_age()
    {
        return your_age;
    }
    string get_last_name()
    {
        return your_second_name;
    }
    string get_first_name()
    {
        return your_first_name;
    }
    int get_standard()
    {
        return your_standard;
    }
    /*
    ostringstream takes data from different types of variables and converts it into string.
    */
    string to_string()
    {
        ostringstream str1; // create an object
        str1 << your_age << "," << your_second_name << "," << your_first_name << "," << your_standard;
        return str1.str(); // return string
    }
};

int main()
{
    Student stud;                      // Create an object of Student
    int age, stand;                    // variable declaration(int)
    std::string first_name, last_name; // variable declaration(string)
    // taking inputs form users
    cin >> age >> first_name >> last_name >> stand;
    stud.set_age(age);
    // Call the method function
    stud.set_first_name(first_name);
    stud.set_last_name(last_name);
    stud.set_standard(stand);
    // print data using get member function
    cout << stud.get_age() << "\n";
    cout << stud.get_last_name() << ", " << stud.get_first_name() << "\n";
    cout << stud.get_standard() << "\n";
    // print data using member function
    cout << "\n"
         << stud.to_string();

    return 1;
}

// https://cplusplus.com/reference/sstream/ostringstream/ostringstream/

// https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjdooCnx7z9AhVtQaQEHeapCcgQwqsBegQIIhAF&url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3D4zCqtUVAReY&usg=AOvVaw1ZQv3XWTh444OkDQTMWAq6