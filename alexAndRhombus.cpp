// https://codeforces.com/problemset/problem/1180/A

#include<iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n; 
    int sum=1 ; 

    for(int i =1  ; i<= n-1; i++)
    {
        sum=sum+2*i+1;
    }
    sum=(sum*2)-(n*2-1);
    cout<<sum;



    return 0 ; 
}

