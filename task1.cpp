#include <iostream>
using namespace std;
float min(float num1, float num2);
main()
{
    float num1, num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    float minimum = min(num1, num2);
    cout << "The minimum of " << num1 << "and" << num2 << "is" << minimum;
}

float min(float num1, float num2)
{
    return num1 > num2 ? num2 : num1;
}