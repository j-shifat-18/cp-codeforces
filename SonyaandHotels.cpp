// https://codeforces.com/problemset/problem/1004/A

#include<iostream>
using namespace std;

int main()
{
    int n , d;
    cin>>n>>d;

    int num[n];
    for(int  i = 0 ; i < n ; i++)
    {
        cin>>num[i];
    }
    int count=0;

    for(int i =  0 ; i < n-1 ; i++)
    {
        if(num[i+1]-num[i]==2*d)
        {
            count++;
        }
        else if(num[i+1]-num[i]>2*d)
        {
            count=count+2;
        }
    }

    cout<<count+2;



    return 0 ; 
}