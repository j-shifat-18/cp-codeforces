#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        if (v.size() == 1)
        {
            cout << 1 << "\n";
        }
        else if (v.size() % 2 == 0)
        {
            int max = v[1] - v[0];
            for (int i = 0; i < n - 1; i += 2)
            {
                int sub = v[i + 1] - v[i];
                if (sub >= max)
                {
                    max = sub;
                }
            }
            cout << max << "\n";
        }
        else
        {
            int a = v[1] - v[0];
            int b = v[n - 1] - v[n - 2];

            if (a > b)
            {
                int max = v[2] - v[1];
                for (int i = 1; i < n - 1; i += 2)
                {
                    int sub = v[i + 1] - v[i];
                    if (sub >= max)
                    {
                        max = sub;
                    }
                }
                cout << max << "\n";
            }
            else
            {
                int max = v[1] - v[0];
                for (int i = 0; i < n - 2; i += 2)
                {
                    int sub = v[i + 1] - v[i];
                    if (sub >= max)
                    {
                        max = sub;
                    }
                }
                cout << max << "\n";
            }
        }
    }

    return 0;
}