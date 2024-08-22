#include<iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n; 

    int rem = n %10;

    if(rem>=5)
    {
        cout<<n+(10-rem);
    }
    else cout<<n-rem;


    return 0 ;
}