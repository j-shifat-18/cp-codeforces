#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, min;
        cin >> x >> y >> k;

        if (x > y)
        {
            min = y;
        }
        else
            min = x;

        cout << 0 << " " << 0 << " " << min << " " << min << "\n";
        cout << 0 << " " << min << " " << min << " " << 0 << "\n";
    }

    return 0;
}