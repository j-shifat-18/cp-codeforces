// https://codeforces.com/problemset/problem/1287/A

#include <iostream>
using namespace std;

int main()
{
    int g;
    cin >> g;

    for (int i = 0; i < g; i++)
    {
        int n;
        cin >> n;
        char std[n + 1];
        cin >> std;
        int count = 0;
        int temp = 0;

        for (int j = 0; j < n; j++)
        {
            if (std[j] == 'A')
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (std[k] == 'P')
                    {
                        temp++;
                    }
                    else
                        break;
                }
                if (temp > count)
                {
                    count = temp;
                }
                temp = 0;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
