// https://codeforces.com/problemset/problem/1269/A

#include<iostream>

using namespace std; 

int main()
{
    int n ;
    cin>>n ;

    if(n==1)
    {
        cout<<8<<" "<<9;
    }
    else cout<<n*2<<" "<<n*3;


    return 0 ; 
}