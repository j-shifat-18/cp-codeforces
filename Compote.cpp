// https://codeforces.com/problemset/problem/746/A

#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cin>>a>>b>>c;

    int count=0;

    while(a>=1 && b>=2 && c>=4)
    {
        a=a-1;
        b=b-2;
        c=c-4;
        count=count+7;
    }

    cout<<count;



    return 0 ;
}