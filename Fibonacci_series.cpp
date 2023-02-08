#include <iostream>
using namespace std;
main()
{
    int number, sum;
    int t1 = 0;
    int t2 = 1;
    cout << "Enter Number of Fibonacci series you want to print: ";
    cin >> number;
    for (int x = 1; x <= number; x = x + 1)
    {
        sum = t1 + t2;
        cout << sum << " , ";
        t1 = t2;
        t2 = sum;
    }
}