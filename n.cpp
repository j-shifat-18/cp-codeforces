#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x;
  cin>>x;

  int count=0;

  count+=x/5;
  x=x%5;
  count+=x/4;
  x=x%4;
  count+=x/3;
  x=x%3;
  count+=x/2;
  x=x%2;
  count+=x;

  cout<<count;

  return 0;
}