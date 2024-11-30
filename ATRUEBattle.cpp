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

        string s;
        cin >> s;
        int count=0;

       if(s[0]=='1' || s[n-1]=='1')
       {
        cout<<"YES\n";
        count++;
       }
       else 
       {
        for(int i = 0 ; i <n-1 ;i++)
        {
            
            if(s[i]=='1'&&s[i+1]=='1')
            {
                cout<<"YES\n";
                count++;
                break;
            }

        }
       }
       if(count==0)
       {
        cout<<"NO\n";
       }
    }

        return 0;
}
