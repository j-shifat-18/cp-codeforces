// https://codeforces.com/problemset/problem/939/A

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int num[n+1];
    for(int i = 1 ; i <= n ; i ++)
    {
        cin>>num[i];
    }

    bool run=true;

    for(int i = 1 ; i <= n && run!=false ; i ++)
    {
        for(int j = 1 ; j <= n && run!=false; j ++)                  
        {
            int a=num[j];
            int b=num[num[j]];
            int c=num[num[num[j]]];
            int d=num[num[num[num[j]]]];

            if(a!=b && b!=c && c!=a && a==d)
            {
                cout<<"YES";
                run=false;
            }
            
        }
    }

    if(run==true)
    {
        cout<<"NO";
    }


    return 0 ;
}