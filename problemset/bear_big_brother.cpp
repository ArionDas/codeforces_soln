#include<bits/stdc++.h>
using namespace std;


int main() {
    int a,b;
    cin >> a >> b;

    int c=0;
    while(a<=b) {
        c++;
        a=3*a;
        b=2*b;
    }
    cout << c << endl;
}