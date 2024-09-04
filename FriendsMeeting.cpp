// https://codeforces.com/problemset/problem/931/A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int sub = abs(a - b) - 1;
    int count = 0;

    if (sub % 2 == 0)
    {
        for (int i = 1; i <= (sub / 2) + 1; i++)
        {
            if (i == (sub / 2) + 1)
            {
                count = count + i;
            }
            else
                count = count + i * 2;
        }

        cout << count;
    }
    else
    {
        for (int i = 1; i <= (sub / 2) + 1; i++)
        {
            count = count + i * 2;
        }

        cout << count;
    }

    return 0;
}