#include <iostream>     // make this code more reliable!!!!!!!!!!!!!!!!!
#include "fibonacci.h"

int main(int argc, char *argv[]){
 
  printf("hello world");
  int num;
  std::cout << "Enter a Number: ";
  std::cin >> num;

  std::cout << fibonacci(num) << std::endl;
}


