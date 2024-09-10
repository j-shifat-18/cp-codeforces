// https://codeforces.com/problemset/problem/894/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int size = word.length();

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (word[i] == 'Q')
        {
            for (int j = i + 1; j < size; j++)
            {
                if (word[j] == 'A')
                {
                    for (int k = j + 1; k < size; k++)
                    {
                        if (word[k] == 'Q')
                        {
                            count++;
                        }
                    }
                }
            }
        }
    }

    cout << count;

    return 0;
}