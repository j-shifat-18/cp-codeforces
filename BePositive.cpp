// https://codeforces.com/problemset/problem/1130/A

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;

    int num[n];
    int positive=0;
    int negative = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>num[i];
        if(num[i]>0)
        {
            positive++;
        }
        else if(num[i]<0)
        {
            negative++;
        }
    }

    float div= (float)n/2;

    if(positive >= div)
    {
        cout<<1;
    }
    else if(negative>= div )
    {
        cout<<-1;
    }
    else cout<<0;


    return 0 ;
}