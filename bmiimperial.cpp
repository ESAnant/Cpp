#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight,height,pounds,inches,bmi;
    std::cout << "Please enter weight in pounds:" << '\n';
    std::cin >> pounds;

    std::cout << "PLease enter height in inches:" << '\n';
    std::cin >> inches;
    weight = pounds*0.453592;
    height = inches*0.0254;

    bmi = weight/(height*height);

    cout<<fixed<<setprecision(2)<<"BMI is: "<<bmi<<endl;
    return 0;
  }
