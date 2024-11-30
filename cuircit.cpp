#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin>>n;
    int m=2*n;

    vector <int> v(m);
    for(int i = 0 ; i < m ; i++)
    {
      int x; 
      cin>>x;
      v[i]=x;
    }

    sort(v.begin(),v.end());

    int min=0,max=0;

    for(int i = 0 ; i < m ;i+=2)
    {
      if(v[i]!=v[i+1])
      {
        min++;
      }
    }
    for(int i = 0 ; i <m/2;i++)
    {
      if(v[i]!=v[m-i-1])
      {
        max++;
      }
    }

    cout<<min<<" "<<max<<"\n";




    
    
  }

  return 0;
}