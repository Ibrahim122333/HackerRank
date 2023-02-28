#include <iostream>
#include <string>
#include <string_view>

using namespace std;

int main()
{
    std::string a, b;                                      // "a" and "b" stores the input string
    cin >> a >> b;                                         // taking input
    std::cout << a.size() << " " << b.size() << std::endl; // print input strings size
    std::cout << a << b << std::endl;                      // print input strings
    std::string_view aa(a.data() + 1, a.size() - 1);       // read the link below for string_view()
    std::string_view bb(b.data() + 1, b.size() - 1);
    std::cout << b[0] << aa << " " << a[0] << bb; // print swap first character of both strings
    return 0;
}

// link for uint8_t-> https://jeelabs.org/book/1506d/index.html
// link for string_view() -> https://www.educative.io/answers/what-is-the-cpp-string-view-in-cpp-17
//  write -std=c++17 on compile command
