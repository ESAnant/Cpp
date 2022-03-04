#include <iostream>
using namespace std;
int main()
{
  int a;
  int b;
  std::cout <<"Please enter 2 grades, separated by a space:"<<endl;
  cin>>a>>b;

if(a<60 && b<60) {

    std::cout << "Student Failed:(" << '\n';

  }
  else if (a>=95 && b>=95) {
    std::cout << "Student Graduated with Honors:)" << '\n';
  }
  else  {
    std::cout << "Student Graduated!" << '\n';

  }
return 0;

}
