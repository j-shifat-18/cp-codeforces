// https://codeforces.com/contest/1992/problem/A

#include <iostream>

int main()
{
    int test;
    std::cin >> test;

    for (int i = 0; i < test; i++)
    {
        int a, b, c, mul;
        std::cin >> a >> b >> c;
        mul = a * b * c;

        for (int j = 0; j < 5; j++)
        {
            if (a < b && a < c)
            {
                a++;
            }
            else if (b < a && b < c)
            {
                b++;
            }
            else if(c < a &&  c < b)
            {
                c++;
            }
            else if (a == b && a>c)
            {
                c++;
            }
            else if (b == c && b>a)
            {
                a++;
            }
            else if (a == c && a>b)
            {
                b++;
            }
            else if (a == b && a<c)
            {
                a++;
            }
            else if (b == c && b<a)
            {
                b++;
            }
            else if (a == c && a<b)
            {
                a++;
            }
            else if (a == b && b == c)
            {
                a++;
            }
            
        }
        mul = a * b * c ;
        std::cout<<mul<<"\n" ;
    }

    return 0;
}