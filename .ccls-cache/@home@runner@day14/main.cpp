//Write a program to reverse a given number
#include <iostream>
using namespace std;
void reverse_1(int ok) {
  int reverse = 0;
  while (ok != 0) {
    reverse = reverse * 10 + ok % 10;
    ok /= 10;
  }
  cout << reverse << endl;
}

int main() {
  int a = 675;
  reverse_1(a);
}