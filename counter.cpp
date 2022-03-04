#include <iostream>
using namespace std;
int main()
{int quarters, dimes, nickels,pennies, total,dollar,cents;

  cout<<"Please enter the number of coins:"<<endl;
  cout<<"# of quarters:"<<endl;
  cin>>quarters;

  cout<<"# of dimes:"<<endl;
  cin>>dimes;

  cout<<"# of nickels:"<<endl;
  cin>>nickels;

  cout<<"# of pennies:"<<endl;
  cin>>pennies;

  total  =((quarters*25)+ (dimes*10)+ (nickels*5)+(pennies*1));
  dollar = total/100;
  cents = total%100;
  cout<<"The total is "<<dollar<<" dollars and "<<cents<<" cents"<<endl;
  return 0;
}
