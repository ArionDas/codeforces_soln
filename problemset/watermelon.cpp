#include<bits/stdc++.h>
using namespace std;

bool check(int m) {
    if(m>0 && m%2==0)
        return true;
    return false;
}

int main() {
    int w;
    cin >> w;
    bool b=0;

    for(int i=2; i<=w; i+=2)
        if(check(w-i)) {
            b=1;
            break;          
        }
    if(b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}