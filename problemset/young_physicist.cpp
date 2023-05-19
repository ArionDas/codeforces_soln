#include<bits/stdc++.h>
using namespace std;

bool sum_array(int a[], int size) {
    int sum=0;
    for(int i=0; i<size; i++)
        sum = sum + a[i];
    if(sum==0)
        return 1;
    else
        return 0;
}

int main () {
    int n;
    cin >> n;

    int x[n], y[n], z[n];

    for(int i=0; i<n; i++)
        cin >> x[i] >> y[i] >> z[i];

    if(sum_array(x, n) && sum_array(y, n) && sum_array(z, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}