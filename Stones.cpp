// https://codeforces.com/problemset/problem/1236/A

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int stones = 0;

        if (b == 0)
        {
            cout << stones << "\n";
        }
        else
        {
            while (c >= 2 && b > 0)
            {
                c = c - 2;
                b = b - 1;
                stones = stones + 3;
            }
            while (b >= 2 && a > 0)
            {
                b = b - 2;
                a = a - 1;
                stones = stones + 3;
            }

            cout << stones << "\n";
        }
    }

    return 0;
}