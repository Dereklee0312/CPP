#include <iostream>

void doNothing(
    int &) // Don't worry about what & is for now, we're just using it to trick
           // the compiler into thinking variable x is used
{}

int main() {
  // define an integer variable named x
  int x; // this variable is uninitialized

  doNothing(
      x); // make the compiler think we're assigning a value to this variable

  // print the value of x to the screen (who knows what we'll get, because x is
  // uninitialized)
  std::cout << x;
  std::cout << "Hello world!\n"; // cout lives in the iostream library
  std::cout << "It is very nice to meet you!\n"; // these comments make the code
                                                 // hard to read
  std::cout << "Yeah!\n"; // especially when lines are different lengths

  return 0;
}
