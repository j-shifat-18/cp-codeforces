// https://codeforces.com/contest/867/problem/A

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    char days[n+1];
    cin>>days; 
    
    int s = 0 , f = 0 ;
    
    for(int i = 0 ; i <n ; i++)
    {
        if(days[i] == 'S' && days[i+1] == 'F' )
        {
            s++;
        }
        else if(days[i] == 'F' && days[i+1] == 'S' )
        {
            f++;
        }
        else 
        {
            s=s;
            f=f;
        }

        
    }
    
    if(s>f)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    
    
    
    
    return 0 ; 
}