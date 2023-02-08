#include <iostream>
using namespace std;
main()
{
    int number;
    int multiple ;
    cout << "Enter Number: ";
    cin >> number;
    for (int x = 1; x <= 10; x = x + 1)
    {
        multiple = number * x;
        cout << number << "  * " << x << " = " << multiple << endl; 
    }
}