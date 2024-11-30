#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i = 1 ; i<=t ; i++)
    {
        long long n;
        int p;
        cin >> n >> p;

        // Determine the winner based on the parity of N and the starting player
        if ((n % 2 == 0 && p == 2) || (n % 2 == 1 && p == 1))
        {
            if (p == 1)
            {
                cout <<"Case "<<i<<": "<< "Evenius\n";
            }
            else
                cout <<"Case "<<i<<": "<<  "Oddius\n";
        }
        else
        {
            if(p==1)
            {
                cout<<"Case "<<i<<": "<< "Oddius\n";
            }
            else 
            cout <<"Case "<<i<<": "<<  "Evenius\n";
        }
    }
    return 0;
}