

#include<iostream>
using namespace std;

int main()
{
    int t ;
    cin>>t;

    for(int i = 0 ; i < t ; i++)
    {
        int n ;
        cin>>n;
        string word;
        cin>>word;

        if(n<2)
        {
            cout<<"NO\n";
        }
        else if(word[0]!=word[n-1])
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }



    return 0 ; 
}