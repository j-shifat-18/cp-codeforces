#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string Starter, Other;
    cin >> t;

    for(int i = 1; i<=t; i++) {
        long long int  n;
        int p;
        cin >> n >> p;
        if(p==2){

            Starter ="Evenius";
            Other = "Odius";
            

        }
        else {
           Starter = "Odius";
            Other = "Evenius";
           
        }
        // Determine the winner based on the parity of N and the starting player
        if ((n % 2 == 0 && p == 2) || (n % 2 == 1 && p == 1)) {
            cout<<"Case: "<<i<<": "<<Starter<<endl;
        } else {
            cout<<"Case: "<<i<<": "<<Other<<endl;
        }
    }
    return 0;
}