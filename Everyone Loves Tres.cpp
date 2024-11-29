#include<bits/stdc++.h>
using namespace std;

bool isDivisibleBy11(const string& number);
bool isDivisibleBy3(const string& number);
bool isDivisibleBy2(const string& number);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if(n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            string number(n, '3');
            number[n - 1] = '6';

            while(true)
            {
                if(isDivisibleBy3(number) && isDivisibleBy11(number) && isDivisibleBy2(number))
                {
                    cout << number << endl;
                    break;
                }

                int pos = n - 1;
                while(pos >= 0)
                {
                    if(number[pos] == '3')
                    {
                        number[pos] = '6';
                        break;
                    }
                    else
                    {
                        number[pos] = '3';
                        pos--;
                    }
                }

                if(pos < 0)
                {
                    cout << -1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}

bool isDivisibleBy11(const string& number)
{
    int alternating_sum = 0;
    for(size_t i = 0; i < number.size(); ++i)
    {
        if(i % 2 == 0)
        {
            alternating_sum += (number[i] - '0');
        }
        else
        {
            alternating_sum -= (number[i] - '0');
        }
    }
    return alternating_sum % 11 == 0;
}

bool isDivisibleBy3(const string& number)
{
    int sum = 0;
    for(char digit : number)
    {
        sum += (digit - '0');
    }
    return sum % 3 == 0;
}

bool isDivisibleBy2(const string& number)
{
    return number.back() == '6';
}