// https://codeforces.com/problemset/problem/1159/A

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;

    for(int i = 0 ; i < n ; i ++)
    {
        if(s[i]=='-')
        {
            count--;
            if(count<0)
            {
                count=0;
            }
        }
        else count++;
    }
    cout<<count;
    

    return 0;
}