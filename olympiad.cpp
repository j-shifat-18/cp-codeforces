// https://codeforces.com/problemset/problem/937/A

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mark[n];

    for (int i = 0; i < n; i++)
    {
        cin >> mark[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp;
            if (mark[j] > mark[j + 1])
            {
                temp = mark[j];
                mark[j] = mark[j + 1];
                mark[j + 1] = temp;
            }
                
        }
    }
    int count = 0;
    int unique = 0 ; 
    int pos;

    for(int i = 0; i < n ; i ++)
    {
        if(mark[i]==0)
        {
            continue;
        }
        else if(mark[i]!=0)
        {
            unique=mark[i];
            pos=i;
            count=1;
            break;
        }
    }

    for(int i = pos ; i < n ; i ++)
    {
        if(mark[i]!=unique)
        {
            unique=mark[i];
            count++;
        }
    }
    if(count==0)
    {
        cout<<1;
    }
    else cout<<count;

    return 0;
}