// https://codeforces.com/contest/2025/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,n,k;
    cin>>N;
    long long int C[N][N];

    for ( n = 0; n < N; n++)
    { // loop over n from 0 to N-1 (inclusive)
        C[n][0] = 1;
        C[n][n] = 1;
        for ( k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
            C[n][k] = C[n][k - 1] + C[n - 1][k - 1];

        if(C[n][k]<pow(10,9))
        {
            cout<<C[n][k]<<endl;
        }
        else 
        {
            int rem = (pow(10,9)+7);
            int result = (C[n][k]) % rem;
            cout<<result<<endl;
        }
        
    }
}