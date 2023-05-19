#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int a[n+1];
        for(int i=1; i<n+1; i++)
            cin >> a[i];

        int c1=0,c2=0;
        bool b=0;
        for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++)
                if(a[j]==2)
                    c1++;
            for(int k=i; k<n; k++)
                if(a[k]==2)
                    c2++;
            if(c1==c2) {
                cout << i << endl;
                b=1;
                break;
            }
            c1=0;
            c2=0;
        }

        if(!b)
            cout << "-1" << endl;
    }
}