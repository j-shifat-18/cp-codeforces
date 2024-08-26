// https://codeforces.com/problemset/problem/1152/A

#include <iostream>
using namespace std;
int main()
{
    int n, m,nEven=0 ,nOdd=0 , mEven=0 , mOdd=0 ;
    int min1,min2;
    cin >> n >> m;
    int chest[n], keys[m];
    for (int i = 0; i < n; i++)
    {
        cin >> chest[i];
        if(chest[i]%2==0)
            nEven++;
        else nOdd++;    
            
    }
    for (int i = 0; i < m; i++)
    {
        cin >> keys[i];
        if(keys[i]%2==0)
            mEven++;
        else mOdd++;
    }

    if(mEven>nOdd)
       min1=nOdd;
    else min1=mEven; 

    if(mOdd>nEven)
       min2=nEven;
    else min2=mOdd;   

    cout<<min1+min2;  
    

    return 0;
}