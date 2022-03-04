#include <iostream>
using namespace std;

int main() {
    int n, t1 = 1, t2 = 1, nextTerm = 0;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {

        if(i == 1) {
            cout << t1 << endl;
            continue;
        }
        if(i == 2) {
            cout << t2 << endl;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm <<endl;
    }
    return 0;
}
