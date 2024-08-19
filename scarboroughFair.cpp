// https://codeforces.com/contest/897/problem/A

#include<iostream>
using namespace std;

int main()
{
    int n , m ;
    cin >>n >>m ;
    char word[n+1];
    cin>>word; 

    for(int i = 0 ; i < m ; i ++)
    {
        int l , r ;
        char c1 , c2 ;
        cin >>l >> r >> c1 >> c2 ;

        for(int j = 1 ; j <= n ; j ++)
        {
            if( j >= l && j<= r && word[j-1] == c1)
            {
                word[j-1]=c2;
            }
        }
    }

    cout<<word; 


    return 0; 
}