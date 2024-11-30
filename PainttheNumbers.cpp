// https://codeforces.com/problemset/problem/1209/A

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int num[n];
    for(int i = 0 ;i < n ; i ++)
    {
         cin>>num[i];

    }

    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n-i-1 ; j++)
        {
            int temp;
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }


    int count=0;


    for(int i = 0 ; i < n && num[i]!=-1;i++)
    {
        for(int j = 0 ; j < n && num[j]!=-1 ; j++)
        {
            if(num[j]%num[i]==0)
            {
                num[j]=(-1);
            }
        }
        count++;
    }

    cout<<count;
   


    return 0 ; 
}