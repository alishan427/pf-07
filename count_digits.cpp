#include <iostream>
using namespace std;
int countDigits(int number);

main()
{
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    int result = countDigits(number);
    
    cout << result;
}

int countDigits(int number)
{
    int total_digits = 0;
    while (number != 0)
    {
        number = number / 10;
        total_digits = total_digits + 1;
    }
    return total_digits;
}