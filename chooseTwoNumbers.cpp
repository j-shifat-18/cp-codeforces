// https://codeforces.com/problemset/problem/1206/A

#include <iostream>

using namespace std;

int main()
{
    int n ,count=0;
    cin >> n;
    int A[n];
    
    
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m;
    cin >> m;
    int B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    int all[n+m];

    for (int i = 0; i < n; i++)
    {
        all[i]=A[i];
    }
    for (int i = 0; i < m; i++)
    {
        all[n+i]= B[i];
    }

    bool breakall=false;

    for(int i = 0 ; i < n && !breakall ; i ++)
    {
        for(int j = 0 ;  j < m && !breakall ; j ++)
        {
            int sum = A[i] + B[j];
            for(int k = 0 ; k < m+n ; k++)
            {
                if(all[k]==sum)
                {
                    count++;
                }
                
            }
            if(count==0)
            {
                cout<<A[i]<<" "<<B[j];
                breakall=true;
            }
            count=0;
            
        }
    }

   

    return 0;
}