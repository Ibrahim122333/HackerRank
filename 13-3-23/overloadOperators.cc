#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Complex {
private:
  int Real;
  int Img;

public:
  int real, img;
  Complex(int real, int img) {
    Real = real;
    Img = img;
  }
};
std::vector<int> mySplitter(std::string input) {
  std::vector<int> output;
  output.push_back(std::stoi(input.substr(0, 1)));
  output.push_back(std::stoi(input.substr(input.find("+") + 2, 3)));
  return output;
}
int main() {

  std::string complex_number_1_string, complex_number_2_string;
  std::vector<int> complex_number_1_int, complex_number_2_int;

  cin >> complex_number_1_string;
  cin >> complex_number_2_string;

  complex_number_1_int = mySplitter(complex_number_1_string);
  complex_number_2_int = mySplitter(complex_number_2_string);

  Complex com1(complex_number_1_int[0], complex_number_1_int[1]);
  Complex com2(complex_number_2_int[0], complex_number_2_int[1]);

  return 0;
}