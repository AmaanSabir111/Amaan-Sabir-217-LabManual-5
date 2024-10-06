#include <iostream>
#include <cmath>

using namespace std;

main()
{
    float num, expo;
    cout << "Enter the base number:";
    cin >> num;
    cout << "Enter the exponent:";
    cin >> expo;
    float power = pow(num,expo);
    cout <<num<< "raised to the power"<<expo<<"is:"<<power;
}
