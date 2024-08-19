// https://codeforces.com/contest/935/problem/A

#include<iostream>
using namespace std;
int main()
{
    int n,l,count=0; 
    cin>>n;

    for(int i = 1 ; i < n ; i ++)
    {
        l= n - i;
        if(l % i == 0)
        {
            count++;
        }
        else count=count; 
        l=0;

    }
    cout<<count;


    return 0 ; 
}