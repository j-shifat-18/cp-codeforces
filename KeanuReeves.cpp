// https://codeforces.com/problemset/problem/1189/A

#include<iostream>

using namespace std; 

int main()
{
    int n ;
    cin>>n; 
    char s[n+1];
    cin>>s;

    int one=0 ; 
    int zero=0;

    for(int i = 0 ; i < n ; i ++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else zero++;
    }

    if(one!=zero)
    {
        cout<<1<<"\n"<<s;
    }
    else
    {
        cout<<2<<"\n";
        cout<<s[0]<<" ";
        for(int i = 1 ; i < n ; i++)
        {
            cout<<s[i];
        }

    } 


    return 0 ; 
}