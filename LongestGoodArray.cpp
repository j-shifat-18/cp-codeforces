// https://codeforces.com/contest/2008/problem/C

#include<iostream>
using namespace std; 
int main()
{
    int t ; 
    cin>>t;

    while(t--)
    {
        int l, r ;
        cin>>l>>r;

        int num=l;
        int incr=0;
        int count=0;

        do{
            num=num+incr;
            count++;
            incr++;
        }while(r-num>=incr);

        cout<<count<<"\n";
    }
    
    return 0 ;
}