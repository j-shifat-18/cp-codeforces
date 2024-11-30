// https://lightoj.com/problem/trailing-zeroes-i

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int k = 1; k <= t; k++)
    {
        long long int n;
        cin >> n;

        int count = 1;

        int m = sqrt(n);

        for (int i = 2; i <= m; i++)
        {
            for (int j = m-1 ; j>=1; j--)
            {
                if ( pow(i, j) == n)
                {
                    count++;
                    break;
                }
            }
        }

        cout << "Case " << k << ": " << count << "\n";
    }

    return 0;
}