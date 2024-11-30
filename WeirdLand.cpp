#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int x, y, g;
        cin >> x >> y >> g;
        
            int g1 = g;
            int b1 = 10000000000-g;
            int b=b1;
            int rem;

            while (g != 0)
            {
                rem = b % g;
                b = g;
                g = rem;
            }

            cout << "Case " << i << ": " << b1 / b << "/" << g1 / b << "\n";
        
    }

    return 0;
}

//500000000
//1000000000-500000000 = 950,000,000