// https://codeforces.com/problemset/problem/950/A

#include<iostream>
using namespace std;
int main()
{
    int l , r , a ;
    cin>>l>>r>>a;

    while(l!=r && a>0)
    {
        if(l<r)
        {
            l=l+1;
            a--;
        }
        else if(r<l)
        {
            r=r+1;
            a--;
        }
    }

   

    if(r==l && a>1)
    {
        r=r+a/2;
        cout<<r*2;
    }
    else if(l<r)
    {
        cout<<l*2;
    }
    else 
    {
        cout<<r*2;
    }

    



    return 0 ; 
}