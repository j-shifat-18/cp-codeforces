#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  for(int j = 1 ; j<=t ; j++)
  {
    int n , k ;
    cin>>n>>k;
    int x , y;

    int count=0;

    for(int i = 0 ; i < n ; i ++ )
    {
      cin>>x>>y;
      count+=k/x;
    }

    cout<<"Case "<<j<<": "<<count<<"\n";

  }

  return 0;
}