#include <iostream>
using namespace std;

int main()
{
  char lowercase,uppercase;
  int offset;
  std::cout << "Enter the lowercase letter: " << '\n';
  std::cin >> lowercase;
  offset = (int)(lowercase - 'a');
  uppercase = (char)(uppercase + 'A');
  std::cout << "The uppercase letter is : "<<uppercase << '\n';
  return 0;
}
t
