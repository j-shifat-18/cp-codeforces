// https://codeforces.com/contest/1244/problem/A

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c, d, k, div, rem, x, y;
        cin >> a >> b >> c >> d >> k;

        div = a / c;
        rem = a % c;

        if (rem != 0)
        {
            x = div + 1;
        }
        else x =  div ;

        div = b / d;
        rem = b % d;

        if (rem != 0)
        {
            y = div + 1;
        }
        else y = div ; 

        if ((x+y) <= k )
        {
            cout<<x<<" "<<y<<"\n";
            
        }
        else cout<<-1<<'\n';
 


    }

    return 0;
}