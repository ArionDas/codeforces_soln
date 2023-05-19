#include<bits/stdc++.h>
using namespace std;

int required_number(int p, int t) {
    int d=0;
    while(t--) {
        d=p%10;
        if(d!=0)
            p--;
        else    
            p=p/10;
    }
    return p;
}

int main() {
    int n,k;
    cin >> n >> k;

    cout << required_number(n, k) << endl;
}