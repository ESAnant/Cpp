#include <iostream>
using namespace std;

int main() {
    int dollars, cents;
    int leftover;
    float amount;
    int numberQuarters, numberDimes, numberNickels, numberPennies;

    cout << "Please enter the amount of money to convert:" << endl;
    cout<<"# of dollars:"<<endl;
    cin>>dollars;

    cout<<"# of cents:"<<endl;
    cin>>cents;

    amount = (dollars*100) + cents;
    leftover = amount;

    numberQuarters = (amount / 25);
    leftover = leftover % 25;

    numberDimes = (leftover/10);
    leftover = leftover % 10;

    numberNickels = (leftover/5);
    leftover = leftover % 5;

    numberPennies = leftover;


    cout <<"The coins are "<<numberQuarters << " quarters, " << numberDimes << " dimes, " << numberNickels << " nickels and " << numberPennies << " pennies" << endl;

    return 0;
}
