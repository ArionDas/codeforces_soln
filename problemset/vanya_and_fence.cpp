#include<bits/stdc++.h>
using namespace std;

int width_required(int a[], int size, int ht) {
    int w=0;
    for(int i=0; i<size; i++) {
        if(a[i]>ht)
            w=w+2;
        else
            w=w+1;
    }
    return w;
}

int main() {
    int n,h;
    cin >> n >> h;

    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    cout << width_required(a, n, h) << endl;
}