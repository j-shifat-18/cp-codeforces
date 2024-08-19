// https://codeforces.com/contest/2004/problem/A

#include<iostream>

using namespace std; 

int main()
{
    int t , n  ; 
    cin >> t ; 
    for (int i = 0 ; i < t ; i ++)
    {
        cin >>n ; 
        int num[n];
        for(int j = 0 ; j < n ; j ++)
        {
            cin>>num[j];
        }
        if(n>2)
        {
            cout<<"NO\n";
        }
        else if(num[1]-num[0] == 1)
        {
            cout<<"NO\n";
        }
        else cout<<"YES\n";

    }

    return 0 ; 
}