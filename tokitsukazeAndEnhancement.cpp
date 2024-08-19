// https://codeforces.com/contest/1191/problem/A

#include<iostream>

using namespace std; 

int main()
{
    int n ; 
    cin>>n; 

    int rem; 

    rem = n %4;

    if (rem == 1)
    {
        cout<<"0 A";
    }
    else if (rem == 3)
    {
        cout<<"2 A";
    }
    else if (rem == 2)
    {
        cout<<"1 B";
    }
    else if (rem == 0)
    {
        cout<<"1 A";
    }



    return 0;
}