#include<stdio.h>
#include <iostream>
using namespace std;

int main () {
  int n;
  int i;
  int z;
  std::cout << "Please enter a positive integer:" << '\n';
  std::cin >> n;
  z=2;
  for (size_t i = 0; i <n; i++) {

        std::cout << z << '\n';
        z+=2;

  }

  return 0;

  }
