// https://codeforces.com/problemset/problem/1269/A

#include<iostream>

using namespace std; 

int main()
{
    int n ;
    cin>>n ;

    if(n==1)
    {
        cout<<9<<" "<<8;
    }
    else cout<<n*3<<" "<<n*2;


    return 0 ; 
}