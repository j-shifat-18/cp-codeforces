// https://codeforces.com/problemset/problem/851/A

#include<iostream>
using namespace std;
int main()
{
    int n , k , t ;
    cin>>n >>k >>t; 

    if(t<=k)
    {
        cout<<t;
    }
    else if(t<=n)
    {
        cout<<k;
    }
    else if(t>n)
    {
        cout<<(n+k)-t;
    }


    return 0 ;
}