// https://codeforces.com/problemset/problem/931/A
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int sub = abs(a - b) - 1;
    int count = 0;

    if (sub == 1)
    {
        cout << 2;
    }
    else
    {
        for (int i = 1; i <= (sub / 2) ; i++)
        {
                count = count + i * 2;
        }

        cout << count;
    }

    return 0;
}

*/

// https://codeforces.com/problemset/problem/931/A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int count=0; 
    
        for (int i = 1; i <= (a/2) ; i++)
        {
                count = count + i * 2;
        }

        cout << count;
    

    return 0;
}