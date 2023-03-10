#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::vector<int> erasE(std::vector<int> input, int rangeStart, int rangeEnd) {
  std::vector<int> output;
  input.erase((input.begin() + (rangeStart - 1)),
              (input.begin() + (rangeEnd - 1)));
  output = input;
  return output;
}
std::vector<int> erasE(std::vector<int> input, int element) {
  std::vector<int> output;

  input.erase(input.begin() + (element - 1));
  output = input;
  return output;
}
int main() {
  std::vector<int> data, tmp;
  int no_of_element_user_input, input_from_user, element_to_erase,
      range_start_to_erase, range_end_to_erase;
  std::cin >> no_of_element_user_input;
  for (int i = 0; i < no_of_element_user_input; i++) {
    std::cin >> input_from_user;
    data.push_back(input_from_user);
  }
  std::cin >> element_to_erase;
  tmp = erasE(data, element_to_erase);
  std::cin >> range_start_to_erase >> range_end_to_erase;
  data.clear();
  data = erasE(tmp, range_start_to_erase, range_end_to_erase);
  for (auto it = data.begin(); it != data.end(); it++) {
    std::cout << *it << std::endl;
  }

  return 0;
}