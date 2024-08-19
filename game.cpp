// https://codeforces.com/problemset/problem/984/A

#include<iostream>

using namespace std;

int main()
{
    int n; 
    cin>>n; 

    int num[n];

    for (int i = 0 ;i < n ; i ++)
    {
        cin>>num[i];
    }

    for(int i = 0 ; i < n-1 ; i ++)
    {
        for(int j = 0 ; j <n-i-1 ; j++)
        {
            int temp;
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

   

    if(n%2==0)
    {
        cout<<num[(n/2)-1];
    }
    else 
        cout<<num[n/2];



    return 0 ; 
}