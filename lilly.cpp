#include <iostream>
using namespace std;

main()
{
    int age, washing_machine, price_of_toy, even = 0, odd = 0, total_price = 0, price = 0, toy_price, price_after_brother = 0, grand_sum = 0, answer = 0;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter Washing machine Price: ";
    cin >> washing_machine;
    cout << "Enter price of toy: ";
    cin >> price_of_toy;

    for (int x = 1; x <= age; x = x + 1)
    {
        x;
        if (x % 2 == 0)
        {
            even = even + 1;
            price = price + 10;
            total_price = total_price + price;
        }
        else
        {
            odd = odd + 1;
        }
    }

    toy_price = price_of_toy * odd;

    price_after_brother = total_price - even;

    grand_sum = price_after_brother + toy_price;

    if (grand_sum > washing_machine)
    {
        answer = grand_sum - washing_machine;
        cout << "yes " << endl
             << answer;
    }
    else
    {
        answer = washing_machine - grand_sum;
        cout << "No" << endl
             << answer;
    }
}