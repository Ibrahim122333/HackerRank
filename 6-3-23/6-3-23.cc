#include <bits/stdc++.h>
#include <cassert>
#include <iostream>
#include <ostream>
#include <random>
#include <system_error>
#include <valarray>
using namespace std;

class Box {
public:
  int l, b, h;
  Box() { l = b = h = 0; }
  Box(int length, int breadth, int height) {
    l = length;
    b = breadth;
    h = height;
  }
  Box(Box &b1) {
    l = b1.l;
    b = b1.b;
    h = b1.h;
  }
  int getLength() { return l; }
  int getBreadth() { return b; }
  int getHeight() { return h; }
  long long CalculateVolume() { return (long long)l * b * h; }
  bool operator<(Box &b1) {
    if ((l < b1.l) || ((b < b1.b) && (l == b1.l)) ||
        ((h < b1.h) && (b == b1.b) && (l == b1.l))) {
      return true;
    } else {
      return false;
    }
  }
};

ostream &operator<<(ostream &out, Box B) {
  int l = B.getLength();
  int b = B.getBreadth();
  int h = B.getHeight();
  return out << l << ' ' << b << ' ' << h << endl;
}

bool operator<(const Box &B1, const Box &B2) {
  if ((B1.l < B2.l) || ((B1.b < B2.b) && (B1.l == B2.l)) ||
      ((B1.h < B2.h) && (B1.b == B2.b) && (B1.l == B2.l))) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int l, b, h;
  cin >> l >> b >> h;
  Box bO1;
  Box bO2(l, b, h);
  std::cout << "length  of box2                     >> " << bO2.getLength()
            << std::endl;
  std::cout << "breadth of box2                     >> " << bO2.getBreadth()
            << std::endl;
  std::cout << "height  of box2                     >> " << bO2.getHeight()
            << std::endl;
  std::cout << "volume  of box2                     >> "
            << bO2.CalculateVolume() << std::endl;
  bool a = bO1 < bO2;
  std::cout << "Box1 is greater than Box2 or not    >> " << a << std::endl;
  std::cout << "Is box1 is greater than box2 or not >> " << std::boolalpha << a
            << std::endl;
  std::cout << "Box2 is                             >> " << bO2 << std::endl;
  // operator<<(std::cout, bO1);

  return 0;
}
// video tutorial for class overloading operator
// https://www.youtube.com/watch?v=BnMnozsSPmw
