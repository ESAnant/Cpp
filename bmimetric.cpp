#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float weight,height,bmi;
    std::cout << "Please enter weight in kilograms:" << '\n';
    std::cin >> weight;

    std::cout << "PLease enter height in meters:" << '\n';
    std::cin >> height;

    bmi = weight/(height*height);

    cout << "BMI is: "<< setprecision(4)<<bmi <<endl;
    return 0;
  }
