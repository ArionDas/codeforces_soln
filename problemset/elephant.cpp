#include<bits/stdc++.h>
using namespace std;

int check_for(int &m, int k) {
    int c=0;
    while(m>=k){
        c++;
        m=m-k;
    }
    return c;
}

int main() {
    int n;
    cin >> n;

    cout << check_for(n, 5) + check_for(n, 4) + check_for(n, 3) + check_for(n, 2) + check_for(n, 1) << endl;    
}