#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int row, col;

        if (n < 4)
        {
            cout << "NO\n";
        }
        else if (n == 4)
        {
            cout << "YES\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    col = i - 1;
                    break;
                }
            }
            row = col - 2;
            int zero = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    zero++;
                }
            }

            if (zero == (row * col - row * 2))
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}