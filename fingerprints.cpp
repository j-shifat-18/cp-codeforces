// https://codeforces.com/contest/994/problem/A

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int seq[n], fing[m];

    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> fing[i];
    }

   

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (fing[j] == seq[i])
            {
                cout << fing[j] << " ";
            }
            
        }
    }

    return 0;
}