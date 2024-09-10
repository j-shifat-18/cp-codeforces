// https://codeforces.com/problemset/problem/1185/A

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a , b , c , d;

    cin>>a>>b>>c>>d;

    for(int i = 0 ; i < 3-1 ;i ++)
    {
        for(int j = 0 ; j < 3 - i - 1 ;j++)
        {
            int temp;
            if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            else if(b>c)
            {
                temp=b;
                b=c;
                c=temp;
            }
        }
    }

   
    
    int count=0;
    if((b-a)<d)
    {
        
        count=count+(d-(b-a));
    }

    if((c-b)<d)
    {
        
        count=count+(d-(c-b));
    }

    cout<<count;
    




    return 0 ;
}