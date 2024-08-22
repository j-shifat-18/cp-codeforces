//  https://codeforces.com/problemset/problem/1243/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        int num[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> num[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j <= n - i - 1; j++)
            {
                int temp;
                if (num[j] < num[j + 1])
                {
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }

        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (num[i] >= i)
            {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}