// https://codeforces.com/contest/1017/problem/A

#include<iostream>
using namespace std;

int main()
{
    int t ;
    int mark[t];
    int thomas;
    cin>>t; 

    for(int i = 0 ; i < t ; i ++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        
        mark[i] = a+b+c+d;
        if(i==0)
        {
            
            thomas=mark[i];
        }
    }

    for(int i = 0 ; i<t-1 ; i++)
    {
        for(int j = 0 ; j<t-i-1 ; j++)
        {
            int temp ;
            if(mark[j]<mark[j+1])
            {
                temp=mark[j];
                mark[j]=mark[j+1];
                mark[j+1]=temp; 
            }
        }
    }

    for(int i = 0; i <t ; i++)
    {
        if(mark[i] == thomas)
        {
            cout<<i+1;
            break;
        }
    }



    return 0  ; 
}