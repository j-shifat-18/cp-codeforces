//https://codeforces.com/problemset/problem/158/B

#include<bits/stdc++.h>

using namespace std ; 

int main()
{
    int n;
    cin>>n;

    int s[n];
    int sum=0;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        sum+=s[i];
    }

    if(sum%4==0)
    {
        cout<<sum/4;
    }
    else if(sum%4!=0)
    {
        cout<<(sum/4)+1;
    }


    return 0 ; 
}