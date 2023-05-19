#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int c=0;
    int d=0;
    bool b = true;

    while(n>0) {
        d=n%10;
        if(d!=4 || d!=7) {
            b=false;
            break;
        }
        if(d==4 || d==7)
            c++;
        n=n/10;
    }
    if((c==7 || c==4) && b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}