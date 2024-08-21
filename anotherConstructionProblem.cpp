// https://codeforces.com/problemset/problem/1088/A

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x == 1)
    {
        cout << -1;
    }
    else
    {
        int num[x + 1];
        bool allbreak = false;

        for (int i = 1; i <= x; i++)
        {
            num[i] = i;
        }
        for (int i = 1; i <= x && !allbreak; i++)
        {
            int a = num[i];
            for (int j = 1; j <= x && !allbreak; j++)
            {
                int b = num[j];

                if (a % b == 0 && a * b > x && a / b < x)
                {
                    cout << a << " " << b;
                    allbreak = true;
                }
            }
        }
        if (allbreak = false)
        {
            cout << -1;
        }
    }

    return 0;
}