// https://codeforces.com/contest/2025/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;

        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[i])
            {
                count++;
            }
            else
                break;
        }

        if(count==0)
        {
            cout<<s.length()+t.length()<<endl;
        }
        else
         {
            cout<<s.length()+t.length()-count+1<<endl;

        }
    }
}
