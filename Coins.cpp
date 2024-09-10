// https://codeforces.com/problemset/problem/1061/A

#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;

    int count = 0;

    while (s > 0)
    {
        if (s <= n)
        {
            count++;
            s = s - n;
        }
        else
        {
            count = count + s / n;
            s = s % n;
        }
    }

    cout << count;

    return 0;
}