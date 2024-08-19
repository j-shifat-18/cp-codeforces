// https://codeforces.com/contest/987/problem/A

#include <iostream>

using namespace std;

int main()
{
    int n , p=0 , g=0 , b=0 , o=0 , r=0 , y=0 ;
    cin >> n;
    string color[n];

    for (int i = 0; i < n; i++)
    {

        cin >> color[i];
    }

    cout << 6 - n << "\n";

    for (int i = 0; i < n; i++)
    {
        if (color[i] == "purple")
        {
            p++;
        }
        else if (color[i] == "green")
        {
            g++;
        }
        else if (color[i] == "blue")
        {
            b++;
        }
        else if (color[i] == "orange")
        {
            o++;
        }
        else if (color[i] == "red")
        {
            r++;
        }
        else if (color[i] == "yellow")
        {
           y++;
        }
        else
            continue;
    }

    if(p==0)
    {
        cout<<"Power\n";    
    }
    if(g==0)
    {
        cout<<"Time\n";    
    }
    if(b==0)
    {
        cout<<"Space\n";    
    }
    if(o==0)
    {
        cout<<"Soul\n";    
    }
    if(r==0)
    {
        cout<<"Reality\n";    
    }
    if(y==0)
    {
        cout<<"Mind\n";    
    }

    return 0;
}