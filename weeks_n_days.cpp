#include <iostream>
using namespace std;
int main()
{
  int days;
  int weeks_traveled;
  int additional_days;

  cout<<"how many days did you travel?"<<endl;
  cin>>days;
  weeks_traveled = days/7;
  additional_days = days%7;

  cout<<"The number of days traveled = "<<weeks_traveled<<" weeks and "<<additional_days<<" days"<<endl;

  return 0;
}
