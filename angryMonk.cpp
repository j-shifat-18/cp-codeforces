// https://codeforces.com/contest/1992/problem/B

#include <iostream>

using namespace std;



int main()
{
    int test, n, k ;
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> n ;
        cin>>k;
        int slice[k];
        int count = 0 , max= 0 ,pos; 

       

        for (int j = 0; j < k; j++)
        {
            cin >> slice[j];
            if(slice[j] > max)
            {
                max=slice[j];
                pos=j;
            }

        }


       

        

        for(int j = 0 ; j < k ; j ++)
        {
            if( j== pos)
            {
                continue;
            }
            else if (slice[j] >= 2)
            {
            count=count+(2*slice[j])-1; 
            }
            else count++;
            
        }
        cout<<count<<"\n";

    }

    return 0;
}