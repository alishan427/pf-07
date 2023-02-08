 #include <iostream>
using namespace std;
main()
{
    int inherited_money, year, even = 0, odd = 0, for_even_years, for_odd_years, age = 18, odd_price = 0, total_cost = 0, answer = 0;
    cout << "Enter inherited money: ";
    cin >> inherited_money;
    cout << "Enter year until he lives: ";
    cin >> year;
    for (int x = 1800; x <= year; x = x + 1)
    {
        
        if (x % 2 == 0)
        {
            even = even + 1;
            for_even_years = for_even_years + 12000;
        }
        else
        {
            odd = odd + 1;
            for_odd_years = 12000 + 50 * (age);
            odd_price = for_odd_years + odd_price;
        }
        age = age + 1;
    }

    for_even_years = even * 12000;
    total_cost = for_even_years + odd_price;
    if (inherited_money > total_cost)
    {
        answer =  inherited_money - total_cost;
        cout << "yes " << endl << answer;
    }
    else
    {
        answer = total_cost - inherited_money ;
        cout << "No" << endl << answer ;
    }
}
