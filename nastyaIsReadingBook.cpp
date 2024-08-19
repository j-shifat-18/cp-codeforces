// https://codeforces.com/contest/1136/problem/A

#include<iostream>
using namespace std; 

int main()
{
    int n ; 
    cin >>n ; 
    int l[n+1] , r[n+1];

    for(int i = 1 ; i <= n ; i ++)
    {
       cin >> l[i] >>r[i];
    }
    int k; 
    cin>>k;

    for(int i = 1 ; i<=n ; i ++)
    {
        if(k>=l[i] && k<=r[i])
        {
            cout<<n-i+1;
            break;
        }
    }


    return 0 ; 
}