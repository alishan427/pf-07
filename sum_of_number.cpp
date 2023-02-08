#include <iostream>
using namespace std;
main()
{
    int number, number1;
    int sum = 0;
    cout << "Enter number: ";
    cin >> number;

    while (number != 0)
    {
       number1 = number % 10;
       sum = sum + number1;
       number = number / 10;
    }

    cout << sum;
}
