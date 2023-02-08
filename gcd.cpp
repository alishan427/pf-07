#include <iostream>
#include <cmath>
using namespace std;
int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int gcd);
main()
{
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    int gcd = calculateGCD(num1, num2);
    int LCM = calculateLCM(num1, num2, gcd);

    cout << "Gcd is "  << gcd <<  endl;
    cout << "LCM is " << LCM;
}

int calculateGCD(int num1, int num2)
{
    int greater_number = max(num1, num2);
    int gcd;
    int y = 0;
    int z = 0;
    for (int x = 1; x <= greater_number; x = x + 1)
    {
        x;
        int y = num1 % x;
        int z = num2 % x;
        if (y == 0 && z == 0)
        {
            gcd = x;
        }
    }
    return gcd;
}

int calculateLCM(int num1, int num2, int gcd)
{
    int LCM = (num1 * num2) / gcd;
    return LCM;
}
