#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>s[i];
        }


        // for(int i = 0 ; i < n ; i++)
        // {
        //     cout<<s[i]<<"\n";
        // }

        int m ;
        cin>>m;

        string q[m];
        for(int i = 0 ; i < m ; i++)
        {
            cin>>q[i];
        }

        int ans=0;

        for(int i = 0 ; i < m ; i++)
        {
            int count = 0 ;
            for(int j = 0 ; j < n ; j++)
            {
                for(int k = 0 ; k < s[j].size() ; k++)
                {
                    if(q[i][j]==s[j][k])
                    {
                        count++;
                    }
                }

                if(count==s[j].size())
                {
                    ans++;
                }
                
            }
        }




    }


    return 0;
}