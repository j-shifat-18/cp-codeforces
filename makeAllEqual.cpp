//  https://codeforces.com/contest/2001/problem/A 

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    int temp;
                    if (a[j] > a[j + 1])
                    {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }

            


            int count = 0;

            for (int i = 0; i < n-1 ; i++)
            {
                if(a[i] < a[i + 1] && a[i+1]==a[i+2])
                {
                    
                    count++;
                }
                else if(a[i] < a[i + 1])
                {
                    a[i+1]=a[i];
                    count++;
                }
            }
            cout << count << "\n";
            
        }
        
    }

    return 0;
}
