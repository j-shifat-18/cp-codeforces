// https://codeforces.com/problemset/problem/1047/A

#include<iostream>
using namespace std;

int main()
{
    int n ; 
    cin>>n; 
    int rem=n%3;

    if(rem==0)
    {
        cout<<n-2<<" "<<1<<" "<<1;
    }
    else if(rem==1)
    {
        cout<<n-2<<" "<<1<<" "<<1;
    }
    else cout<<n-3<<" "<<1<<" "<<2;



    return 0 ; 
}