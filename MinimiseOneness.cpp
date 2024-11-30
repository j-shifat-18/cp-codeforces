#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << "0\n";
        }
        else
        {

            for (int i = 1; i <= n; i++)
            {
                if (i == n)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}

//  if(n%2==0)
//     {
//          for(int i = 0 ; i<n/2 ; i++)
//          {
//             cout<<"0";
//          }
//          for(int i = 0 ; i<n/2 ; i++)
//          {
//             cout<<"1";
//          }
//          cout<<endl;
//     }
//     else
//     {
//         for(int i = 0 ; i < (n/2)+1 ; i++)
//         {
//             cout<<"0";
//         }
//         for(int i = 0 ; i < n/2 ; i++)
//         {
//             cout<<"1";
//         }

//         cout<<endl;
//     }
