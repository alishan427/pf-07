#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
  int number , digit;
  cout << "Enter number: ";
  cin >> number;
  cout << "enter digit: ";
  cin >> digit;
  int result = frequencyChecker( number, digit);
  cout << result;

}

int frequencyChecker(int number, int digit)
{
    int count = 0;
    while (number != 0)
    {   
        int remainder = number % 10;
        if (digit == remainder)
        {
            count = count + 1;
        }
        number = number / 10;
        
    }
    return count;
}