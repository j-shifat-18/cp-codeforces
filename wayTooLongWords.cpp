// https://codeforces.com/contest/71/problem/A

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string word;

    for (int i = 0; i < n; i++)
    {
        cin >> word;

        if (word.length() > 10)
        {
            cout << word.at(0) << word.length() - 2 << word.at(word.length() - 1) << "\n";
        }
        else
            cout << word << "\n";
    }

    return 0;
}
