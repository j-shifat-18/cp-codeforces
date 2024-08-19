// https://codeforces.com/contest/1220/problem/A

#include <iostream>

using namespace std;

int main()
{
    int length;
    cin >> length;

    char word[length + 1];
    cin >> word;

    int n = 0;
    int z = 0;

    for (int i = 0; i < length; i++)
    {
        if (word[i] == 'n')
        {
            n++;
        }
        else if (word[i] == 'z')
        {
            z++;
        }
        else
        {
            n = n;
            z = z;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "1 ";
    }
    for (int i = 0; i < z; i++)
    {
        cout << "0 ";
    }

    return 0;
}