#include <iostream>
using namespace std;

int main()
{
  char input;
  int ASCIIval;
  cout << "Please enter the character: "<<endl;
  cin >> input;
  ASCIIval = (int)input;

  cout << "The ASCII value of " <<input<<" is " <<ASCIIval<<endl;
  return 0;
}
