#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int n =  s1.length();
    bool run=true;

    for(int i = 0 ; i < n  ; i++)
    {
        if(tolower(s1[i])>tolower(s2[i]))
        {
            cout<<1<<"\n";
            run=false;
            break;
        }
        else if(tolower(s1[i])<tolower(s2[i]))
        {
            cout<<-1<<"\n";
            run=false ;
            break;
        }
    }

    if(run==true)
    {
        cout<<0<<"\n";
    }
    

    return 0;
}