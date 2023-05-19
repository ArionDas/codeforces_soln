#include<bits/stdc++.h>
using namespace std;

double fraction(double a[], double size) {
    double sum = 0;

    for(int i=0; i<size; i++) {
        sum = sum + a[i]/100;
    }

    return 100*(sum/size);
}

int main() {
    int n;
    cin >> n;

    double a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    cout << fraction(a, n) << endl;
}