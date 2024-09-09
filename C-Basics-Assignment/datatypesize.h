#include<iostream>

int size(){
  std::cout << "size of int is: " << sizeof(int) << "byte\n";
  std::cout << "size of float is: " << sizeof(float) << "byte\n";
  std::cout << "size of char is: " << sizeof(char) << "byte\n";
  std::cout << "size of boolean is: " << sizeof(bool) << "byte\n";

  return 0;
}