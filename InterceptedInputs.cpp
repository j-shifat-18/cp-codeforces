// https://codeforces.com/contest/2037/problem/B

#include<bits/stdc++.h>

using namespace std ; 

int main()
{
    int t ;
    cin>>t;

    while(t--)
    {
        int k ;
        cin>>k; 
        int arr[k];
        for(int i = 0 ; i < k ; i ++)
        {
            cin>>arr[i];
        }
        int dim = k-2;
        bool run=true; 

        for(int i = 0 ; i < k && run==true ; i ++)
        {
            for(int j = 0 ; j < k && run==true ; j ++)
            {
                if(i==j)
                {
                    continue;
                }
                else 
                {
                    if(arr[i]*arr[j]==dim)
                    {
                        cout<<arr[i]<<" "<<arr[j]<<endl;
                        run=false ;
                       // break; 
                        
                    }
                }
            }
        }
    }



    return 0 ; 
}