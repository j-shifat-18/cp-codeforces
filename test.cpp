#include <iostream>

using namespace std;

int main()
{
    int n;
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

    for(int i = 0 ; i < m+n ; i ++)
    {
        cout<<all[i]<<" ";
    }


     return 0; 
}