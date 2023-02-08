#include <iostream>
using namespace std;
main()
{
 int n,o;
 float p1= 0 ,p2 = 0,p3 = 0,p4 = 0 ,p5=0;
 cout << "enter number: ";
 cin >> n;
 for (int x = 0 ; x < n ; x=x+1)
 {
    cin >> o;
    if (o >=1 && o <=199)
    {
         p1 = p1 + 1;
    }
     if (o>=200 && o<=399)
    {
         p2 = p2 + 1;
    }
     if (o>=400 && o<=599)
    {
         p3 = p3 + 1;
    }
     if (o>=600 && o<=799)
    {
         p4 = p4 + 1;
    }
     if (o>=800 && o<=1000)
    {
         p5 = p5 + 1;
    }

 }

 cout << endl;
 float percent = 0;
 percent = p1/n*100;
 cout << "p1 is "<< percent << endl;
 float percent2 = 0;
 percent2 = p2/n*100;
 cout << "p2 is "<< percent2 << endl;
 float percent3 = p3/n*100;
 cout << "p3 is "<< percent3 << endl;
 float percent4 = p4/n*100;
 cout << "p4 is "<< percent4 << endl;
 float percent5 = p5/n*100;
 cout << "p5 is "<< percent5 << endl;


}