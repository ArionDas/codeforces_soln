#include<bits/stdc++.h>
using namespace std;

int diff(int num) {
    int max=0,min=0;

    while(num>=0) {
        if(num%10 > max)
            max = num%10;
        else if(num%10 < min)
            min = num%10;
        
        num = num/10;
    }

    return max-min;
}

int main() {
    int t;
    cin>> t;
    while(t--) {
        int l, r;
        cin >> l >> r;

        int max = 0;
        for(int i=l; i<=r; i++) {
            if(max <= diff(i))
               max = i; 
        }
        cout << max << endl;
    }
}