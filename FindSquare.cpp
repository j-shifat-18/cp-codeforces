// https://codeforces.com/problemset/problem/1028/A

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int black = 0;
    string square;
    int i, j;
    int row=0,col=0;

    for (i = 0; i < n; i++)
    {
        cin >> square;

        for (j = 0; j < m; j++)
        {
            if (square[j] == 'B')
            {
                row=i;
                col=j;
                black++;
            }
        }
    }

    int centre = (sqrt(black) / 2) + 1;
    row=row+1-sqrt(black);
    col=col+1-sqrt(black);

   // cout<<row<<" "<<col<<" "<<centre<<'\n';



    cout << centre+row << " " << centre+col;

    return 0;
}