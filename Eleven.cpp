// https://codeforces.com/problemset/problem/918/A

#include<iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n; 
    int fibo[n+1];
    fibo[1]=1;
    fibo[2]=1;
    
    if(n==2)
    {
        cout<<"OO";
    }
    else if(n==3)
    {
        cout<<"OOO";
    }
    else 
    {
        for(int i = 3 ; i <= n ; i++ )
    {
        fibo[i]=fibo[i-2]+fibo[i-1];
    }

    for(int i = 1 ; i <=n ; i ++)
    {
        bool allbreak=true;
        for(int j = 1 ; j <=n ; j++)
        {
            if(fibo[j]==i)
            {
                allbreak=false;
                cout<<"O";
                break;
            }
            
        }
        if(allbreak==true)
        {
            cout<<"o";
        }
    }
    }
    


    return 0 ;
}