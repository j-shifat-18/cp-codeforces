// https://codeforces.com/problemset/problem/832/A

#include<iostream>

using namespace std; 

int main()
{
    long long int n , k ; 
    cin>> n >> k;
    int count;

    count=n/k; 

    if(count%2==0)
    {
        cout<<"NO";
    }
    else cout<<"YES";



    return 0 ;
}