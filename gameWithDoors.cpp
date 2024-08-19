// https://codeforces.com/contest/2004/problem/B

#include<iostream>
using namespace std; 

int main()
{
    int t ;
    cin>>t ; 
    for(int i = 0; i <t ; i ++)
    {
        int l,r,L,R;
        cin>>l>>r;
        cin>>L>>R; 

        if(L > r || l > R)
            cout<<1<<'\n';
        else if (r==L && R>l)
            cout<<2<<"\n";
        else if (L>l && R>r)
            cout<<r-L+2<<"\n";
        else if(l==L && R>r)
            cout<<r-L+1<<"\n";
        else if(l==L && r==R)
            cout<<r-L<<'\n';
        else if(l==L && r>R)
            cout<<R-L+1<<"\n";
        else if(l>L && R>r)
            cout<<r-l+2<<"\n";
        else if(L>l && r>R)
            cout<<R-L+2<<"\n";
        else if(r==R && l>L)
            cout<<r-l+1<<"\n";
        else if(r==R && L>l)
            cout<<R-L+1<<"\n";
        else if(l>L && r>R)
            cout<<R-l+2<<"\n";
        else
            continue; 
        

    }


    return 0 ; 
}