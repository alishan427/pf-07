#include <iostream>
using namespace std;
main()
{
 int x=0, sum = 0;
 for (int i=1; i <= 100 ; i++)
 {  
    x = x+1;
    sum = sum + x;
    cout << x << endl;
 }
 cout << "The sum of 100 natural numbers are: " << sum;
}