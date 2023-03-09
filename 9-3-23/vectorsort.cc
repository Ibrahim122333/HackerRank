#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int>
      vec; // initializing the vector that is stored the the unsorted values
  int elements, no_of_elements;
  cin >> no_of_elements;
  for (int a = 0; a < no_of_elements; a++) {
    cin >> elements;         // taking the inputs from users
    vec.push_back(elements); // storing values on the vector
  }

  std::sort(vec.begin(), vec.end()); // Sorting the vector

  for (auto i = vec.begin(); i < vec.end(); i++) {
    cout << *i << " "; // printing the sorted vector
  }
  return 0;
}
