#include <bits/stdc++.h>
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

int main() {
  int l, b, h;
  cin >> l >> b >> h;
  if (l == 0 && b == 0 && h == 0) {
    Box bO1;
    cout << bO1;
  } else {
    Box bO1(l, b, h);
    cout << bO1;
  }
  // operator<<(std::cout, bO1);

  return 0;
}