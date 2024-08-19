// https://codeforces.com/contest/1080/problem/A

#include<iostream>
using namespace std; 

int main()
{
    int n , k ; 
    cin >> n >>k;
    int red=2*n, green= 5*n, blue=8*n;
    int count=0; 

    if(red%k !=0)
    {
        count=count+red/k + 1; 
    }
    else 
    {
        count=count+red/k;
    }

    if(green%k !=0)
    {
        count=count+green/k + 1; 
    }
    else 
    {
        count=count+green/k;
    }
    if(blue%k !=0)
    {
        count=count+blue/k + 1; 
    }
    else 
    {
        count=count+blue/k;
    }

    cout<<count; 
   
   
   

    return 0 ; 
}