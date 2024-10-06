#include <iostream>
#include <cmath>
using namespace std;
bool symm(int num);
main()
{
    int num;
    cout << "Enter a three-digit number:";
    cin >> num;
    bool symmetric = symm(num);
    if (symmetric == 1)
    {

        cout << "The number is symmetrical";
    }
    else
    {

        cout << "The number is not symmetrical";
    }
}
bool symm(int num)
{
    int reversed = num;
    if (num!=0)
    {
        reversed % 10;
        reversed / 10;
        reversed = reversed % 10;
    }

    return (num == reversed) ? true : false;
}