// https://codeforces.com/problemset/problem/1255/A

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        int diff ;

        if (a > b)
        {
            diff = a - b;
        }
        else if (a < b)
        {
            diff = b - a;
        }

         

        
        count = count + diff / 5;
        diff = diff % 5;

        
        count = count + diff / 2;
        diff = diff % 2;

        
        count = count + diff ;
        diff = diff % 1;

        cout << count << "\n";
    }

    return 0;
}