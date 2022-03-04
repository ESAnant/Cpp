#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int num1, num2, num3, num4;
    cout << "Please enter 4 positive integers, separated by a space:" << endl;
    cin >> num1 >> num2 >> num3 >> num4;
    int evens = 0;
    int odds = 0;
    if ((num1 % 2) == 0) ++evens; else ++odds;
    if ((num2 % 2) == 0) ++evens; else ++odds;
    if ((num3 % 2) == 0) ++evens; else ++odds;
    if ((num4 % 2) == 0) ++evens; else ++odds;
    if (evens > odds)
    {
        cout << "more evens\n";
    }
    if (odds > evens) cout << "more odds\n";
    if (odds == evens) cout << "same number of evens and odds\n";
    return 0;
}
