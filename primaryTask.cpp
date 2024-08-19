// https://codeforces.com/contest/2000/problem/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string num;
    for (int i = 0; i < t; i++)
    {
        cin >> num;

        int a = stoi(num);

        if (num[0] == '1' && a > 101 && a < 110)
        {
            cout << "YES\n";
        }
        else if (num[0] == '1' && a > 1009 && a < 1100)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}